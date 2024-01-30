@class NSString;

@interface RTContactPostalAddress : RTAddress

@property (readonly, copy, nonatomic) NSString *contactsIdentifier;
@property (readonly, nonatomic) unsigned long long labelType;

+ (id)labelTypeToString:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 subPremises:(id)a1 subThoroughfare:(id)a2 thoroughfare:(id)a3 subLocality:(id)a4 locality:(id)a5 subAdministrativeArea:(id)a6 administrativeArea:(id)a7 administrativeAreaCode:(id)a8 postalCode:(id)a9 country:(id)a10 countryCode:(id)a11 inlandWater:(id)a12 ocean:(id)a13 areasOfInterest:(id)a14 isIsland:(BOOL)a15 creationDate:(id)a16 expirationDate:(id)a17 iso3166CountryCode:(id)a18 iso3166SubdivisionCode:(id)a19;
- (id)geoDictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 subPremises:(id)a1 subThoroughfare:(id)a2 thoroughfare:(id)a3 subLocality:(id)a4 locality:(id)a5 subAdministrativeArea:(id)a6 administrativeArea:(id)a7 administrativeAreaCode:(id)a8 postalCode:(id)a9 country:(id)a10 countryCode:(id)a11 inlandWater:(id)a12 ocean:(id)a13 areasOfInterest:(id)a14 isIsland:(BOOL)a15 creationDate:(id)a16 expirationDate:(id)a17 contactsIdentifier:(id)a18 labelType:(unsigned long long)a19 iso3166CountryCode:(id)a20 iso3166SubdivisionCode:(id)a21;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 lableType:(unsigned long long)a1 geoDictionary:(id)a2;

@end
