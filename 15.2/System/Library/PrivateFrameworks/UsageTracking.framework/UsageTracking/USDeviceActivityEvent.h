@class NSSet, NSDateComponents;

@interface USDeviceActivityEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *applicationTokens;
@property (readonly, copy) NSSet *categoryTokens;
@property (readonly, copy) NSSet *webDomainTokens;
@property (readonly, copy) NSDateComponents *threshold;
@property (readonly) BOOL includesAllActivity;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithApplicationTokens:(id)a0 categoryTokens:(id)a1 webDomainTokens:(id)a2 threshold:(id)a3;

@end
