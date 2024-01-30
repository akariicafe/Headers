@class NSString;

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *batchID;
@property (readonly, nonatomic, getter=isFakeBrandForTestAccounts) BOOL fakeBrandForTestAccounts;

+ (id)createFakeBrandForTestAccounts;

- (void)encodeWithCoder:(id)a0;
- (id)initWithExternalID:(id)a0 batchID:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
