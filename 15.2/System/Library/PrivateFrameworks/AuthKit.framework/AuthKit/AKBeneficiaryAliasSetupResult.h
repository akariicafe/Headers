@class NSString;

@interface AKBeneficiaryAliasSetupResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *beneficiaryAltDSID;
@property (copy, nonatomic) NSString *beneficiaryAccountName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
