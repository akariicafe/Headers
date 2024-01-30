@interface PPConnectionsAddressFormatter : NSObject

+ (id)addressComponentValueWithLocationField:(unsigned char)a0 forAddress:(id)a1 duetEvent:(id)a2;
+ (BOOL)isValidAddressDictionary:(id)a0;
+ (id)formattedStreetNameWithThoroughfare:(id)a0 subThoroughfare:(id)a1;
+ (id)formattedCityAndStateWithCity:(id)a0 state:(id)a1;
+ (id)singleLineFormattedAddressWithPostalAddress:(id)a0 shortStyle:(BOOL)a1;
+ (id)postalAddressFromDuetEvent:(id)a0;
+ (id)postalAddressFromAttributeSet:(id)a0;
+ (id)formattedAddressWithLocationField:(unsigned char)a0 address:(id)a1 duetEvent:(id)a2 shortStyle:(BOOL)a3;
+ (id)addressDictionaryFromAttributeSet:(id)a0;

@end
