@interface HMDBulletinCategory : HMFObject

+ (BOOL)isSensorDetectedCharacteristic:(id)a0;
+ (id)localizedStateForCharacteristic:(id)a0;
+ (id)presentationValueForValue:(id)a0 type:(id)a1;
+ (id)trimLeadingAndTailingSpacesInName:(id)a0;
+ (id)_sensorMap;
+ (id)_presentationTypeForType:(id)a0;
+ (id)_localizedStateForValue:(id)a0 characteristicType:(id)a1;
+ (id)_enumerationValueLocalizationKeys;
+ (id)_secureStateMap;
+ (id)localizedStringForItems:(id)a0;

@end
