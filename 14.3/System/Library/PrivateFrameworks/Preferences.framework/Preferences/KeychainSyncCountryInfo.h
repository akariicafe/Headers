@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *dialingPrefix;
@property (retain, nonatomic) NSString *localizedCountryName;

+ (id)countryInfoWithDictionary:(id)a0;
+ (void)_loadCountriesIfNeeded;
+ (id)countryInfoForCountryCode:(id)a0 dialingPrefix:(id)a1;
+ (id)allCountries;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
