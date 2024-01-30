@class NSString, NSData, NSDate;

@interface HKSignedClinicalDataRegistryPublicKeyEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *kid;
@property (readonly, copy, nonatomic) NSDate *added;
@property (readonly, copy, nonatomic) NSDate *removed;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSData *jwk;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyID:(id)a0 added:(id)a1 removed:(id)a2 source:(id)a3 jwkData:(id)a4;

@end
