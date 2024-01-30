@class NSString;

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *batchID;
@property (readonly, nonatomic, getter=isFakeBrandForTestAccounts) BOOL fakeBrandForTestAccounts;

+ (id)createFakeBrandForTestAccounts;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExternalID:(id)a0 batchID:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
