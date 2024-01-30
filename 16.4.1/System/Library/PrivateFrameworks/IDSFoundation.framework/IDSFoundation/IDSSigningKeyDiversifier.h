@class NSString, NSData;

@interface IDSSigningKeyDiversifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *diversifier;
@property (retain, nonatomic) NSData *trackingPreventionSecret;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDiversifier:(id)a0 trackingPreventionSecret:(id)a1;

@end
