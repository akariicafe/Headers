@class NSUUID, NSString;

@interface AAInheritanceInvitation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (readonly, copy, nonatomic) NSString *beneficiaryHandle;
@property (readonly, copy, nonatomic) NSString *beneficiaryFirstName;
@property (readonly, copy, nonatomic) NSString *beneficiaryLastName;
@property (readonly, copy, nonatomic) NSString *beneficiaryDisplayName;
@property (readonly, nonatomic) long long status;

- (id)_statusDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeneficiaryID:(id)a0 beneficiaryHandle:(id)a1 beneficiaryFirstName:(id)a2 beneficiaryLastName:(id)a3 beneficiaryDisplayName:(id)a4 status:(long long)a5;
- (id)initWithBeneficiaryID:(id)a0 beneficiaryHandle:(id)a1;

@end
