@class NSString;

@interface PPPostalAddress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;

+ (id)normalizeAddressString:(id)a0;
+ (id)postalAddressWithThoroughfare:(id)a0 subThoroughfare:(id)a1 locality:(id)a2 subLocality:(id)a3 administrativeArea:(id)a4 subAdministrativeArea:(id)a5 postalCode:(id)a6 country:(id)a7;

- (id)toCNPostalAddress;
- (void)encodeWithCoder:(id)a0;
- (id)singleLineNormalizedAddressString;
- (id)description;
- (id)initWithThoroughfare:(id)a0 subThoroughfare:(id)a1 locality:(id)a2 subLocality:(id)a3 administrativeArea:(id)a4 subAdministrativeArea:(id)a5 postalCode:(id)a6 country:(id)a7;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContactsPostalAddress:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFoundInAppsPostalAddress:(id)a0;
- (BOOL)isEqualToPostalAddress:(id)a0;
- (unsigned long long)hash;
- (id)_countryStringWithCountry:(id)a0 isoCode:(id)a1;

@end
