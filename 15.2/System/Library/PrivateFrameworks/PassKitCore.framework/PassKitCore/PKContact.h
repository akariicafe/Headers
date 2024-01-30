@class CNPhoneNumber, NSString, NSPersonNameComponents, CNPostalAddress;

@interface PKContact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSPersonNameComponents *name;
@property (retain, nonatomic) CNPostalAddress *postalAddress;
@property (retain, nonatomic) CNPhoneNumber *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *supplementarySubLocality;

+ (long long)version;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)isEqualToContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cnMutableContact;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCNContact:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
