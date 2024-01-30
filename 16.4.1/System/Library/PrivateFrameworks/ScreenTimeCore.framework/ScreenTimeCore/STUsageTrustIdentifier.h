@class NSString;

@interface STUsageTrustIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL usageTrusted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_stUsageTrustIdentifierCommonInitWithIdentifier:(id)a0 usageTrusted:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 usageTrusted:(BOOL)a1;

@end
