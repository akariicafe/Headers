@class NSString;

@interface STUsageTrustIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL usageTrusted;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 usageTrusted:(BOOL)a1;
- (void)_stUsageTrustIdentifierCommonInitWithIdentifier:(id)a0 usageTrusted:(BOOL)a1;

@end
