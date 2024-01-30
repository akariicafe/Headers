@interface CNAddressFormats : NSObject

+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)supportedCountries;
+ (id)addressFormats;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)fallbackCountryCode;
+ (id)makeSupportedCountries;
+ (id)countryCodeByLocaleLookup;
+ (id)usaStateAbbreviations;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)usaStateNames;

@end
