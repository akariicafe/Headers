@class NSString, NSArray;

@interface SKUIDeveloperInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *businessRegistrationIdentifier;
@property (copy, nonatomic) NSString *ECommerceRegistrationIdentifier;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *tradeName;
@property (copy, nonatomic) NSString *tradeRepresentativeName;
@property (copy, nonatomic) NSArray *addressLines;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *postalCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedAddressString;
- (id)initWithDeveloperDictionary:(id)a0;

@end
