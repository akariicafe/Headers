@class NSString, NSPersonNameComponents;

@interface TISupplementalPersonItem : TISupplementalItem

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *previousFamilyName;
@property (readonly, nonatomic) NSPersonNameComponents *personNameComponents;

+ (BOOL)supportsSecureCoding;

- (id)initWithContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithPersonNameComponents:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
