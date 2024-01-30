@interface PPConnectionsAddressFormatter : NSObject

+ (id)formattedAddressWithLocationField:(unsigned char)a0 address:(id)a1 duetEvent:(id)a2 shortStyle:(BOOL)a3;
+ (id)addressComponentValueWithLocationField:(unsigned char)a0 forAddress:(id)a1 duetEvent:(id)a2;
+ (id)addressDictionaryFromAttributeSet:(id)a0;
+ (id)formattedCityAndStateWithCity:(id)a0 state:(id)a1;
+ (id)formattedStreetNameWithThoroughfare:(id)a0 subThoroughfare:(id)a1;
+ (BOOL)isValidAddressDictionary:(id)a0;
+ (id)postalAddressFromAttributeSet:(id)a0;
+ (id)postalAddressFromDuetEvent:(id)a0;
+ (id)singleLineFormattedAddressWithPostalAddress:(id)a0 shortStyle:(BOOL)a1;

@end
