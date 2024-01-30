@interface CNAddressFormats : NSObject

+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)addressFormats;
+ (id)supportedCountries;
+ (id)usaStateAbbreviations;
+ (id)fallbackCountryCode;
+ (id)makeSupportedCountries;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)countryCodeByLocaleLookup;
+ (id)usaStateNames;

@end
