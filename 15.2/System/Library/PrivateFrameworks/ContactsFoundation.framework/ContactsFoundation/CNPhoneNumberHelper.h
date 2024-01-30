@interface CNPhoneNumberHelper : NSObject

+ (BOOL)isStringPhoneNumber:(id)a0;
+ (id)internationalizedFormattedNumber:(id)a0 countryCode:(id)a1;
+ (id)defaultCountryCode;
+ (id)internationalizedUnformattedNumber:(id)a0 countryCode:(id)a1;
+ (id)lastFourDigitsForNumber:(id)a0;
+ (id)makePhoneNumberRegex;
+ (id)countryCodeForNumber:(id)a0;

@end
