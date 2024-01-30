@class PKAccountBeneficiaryInfo, CNContact;

@interface PKSavingsAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CNContact *primaryUser;
@property (copy, nonatomic) PKAccountBeneficiaryInfo *beneficiaryInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_pkRequiredStringFromDictionary:(id)a0 forKey:(id)a1;

@end
