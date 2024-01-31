@interface CNAddressFormats : NSObject

+ (id)addressFormats;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)countryCodeByLocaleLookup;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)fallbackCountryCode;
+ (id)makeSupportedCountries;
+ (id)supportedCountries;
+ (id)usaStateAbbreviations;
+ (id)usaStateNames;

@end
