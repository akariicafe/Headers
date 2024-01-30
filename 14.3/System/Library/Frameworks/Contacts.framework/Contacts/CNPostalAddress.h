@class NSString;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSString *formattedAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForKey:(id)a0;
+ (id)postalAddressWithAddressBookDictionaryRepresentation:(id)a0;
+ (id)postalAddressWithDictionaryRepresentation:(id)a0;

- (id)formattedAddressStrings;
- (id)CalLocation;
- (id)formattedAddressString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addressBookDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPostalAddress:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid:(id *)a0;

@end
