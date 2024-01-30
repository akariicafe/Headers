@class NSString;

@interface AKInheritanceCLIContext : AKInheritanceContext

@property (copy, nonatomic) NSString *accessKeyString;
@property (copy, nonatomic) NSString *beneficiaryFirstName;
@property (copy, nonatomic) NSString *beneficiaryLastName;
@property (copy, nonatomic) NSString *beneficiaryPassword;
@property (copy, nonatomic) NSString *identityToken;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
