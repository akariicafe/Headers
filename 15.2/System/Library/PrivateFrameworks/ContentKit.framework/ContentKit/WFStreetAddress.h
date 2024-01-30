@class CNPostalAddress, NSString, CLPlacemark;

@interface WFStreetAddress : NSObject <WFNaming, WFSerializableContent>

@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *shortAddressString;
@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *isoCountryCode;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (BOOL)stringContainsStreetAddresses:(id)a0;
+ (id)streetAddressesInString:(id)a0 error:(id *)a1;
+ (id)streetAddressWithTextCheckingResult:(id)a0;
+ (id)streetAddressWithStreet:(id)a0 subLocality:(id)a1 city:(id)a2 subAdministrativeArea:(id)a3 state:(id)a4 postalCode:(id)a5 country:(id)a6 isoCountryCode:(id)a7 label:(id)a8;
+ (id)streetAddressWithPlacemark:(id)a0 label:(id)a1;
+ (id)streetAddressWithPostalAddress:(id)a0 label:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (id)streetAddressWithLabel:(id)a0;
- (id)initWithPostalAddress:(id)a0 placemark:(id)a1 formattedAddress:(id)a2 label:(id)a3;
- (id)initWithStreet:(id)a0 subLocality:(id)a1 city:(id)a2 subAdministrativeArea:(id)a3 state:(id)a4 postalCode:(id)a5 country:(id)a6 isoCountryCode:(id)a7 placemark:(id)a8 formattedAddress:(id)a9 label:(id)a10;

@end
