@interface PNRUtils : NSObject

+ (id)_preferredLanguages;
+ (id)_stringByStrippingFormattingAndNotVisiblyAllowable:(id)a0;
+ (id)_currentLocale;
+ (id)_currentCountry;
+ (void)_countryCodeFromInternationalCode:(id)a0 result:(id /* block */)a1;
+ (BOOL)_isValidPhoneNumber:(id)a0;
+ (void)_localizedCountryNameForISOCountryCode:(id)a0 result:(id /* block */)a1;

@end
