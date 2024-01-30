@interface CNVCardADRParser : NSObject

+ (id)valueWithParser:(id)a0;
+ (void)processExtensionValuesForLines:(id)a0 validCountryCodes:(id)a1 parser:(id)a2;
+ (id)parseStreetAddressComponentsWithParser:(id)a0;
+ (void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)a0;
+ (BOOL)parseNextStringWithParser:(id)a0 components:(id)a1 key:(id)a2;
+ (id)addressValueWithPrimaryAddress:(id)a0 extendedAddress:(id)a1 poBox:(id)a2;
+ (id)countryCodeForLine:(id)a0 validCountryCodes:(id)a1 parser:(id)a2;

@end
