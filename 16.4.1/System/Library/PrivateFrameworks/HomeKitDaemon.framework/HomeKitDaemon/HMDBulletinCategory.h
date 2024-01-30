@class NSDictionary;

@interface HMDBulletinCategory : HMFObject

@property (class, readonly) NSDictionary *targetCurrentCharacteristicTypeMap;

+ (id)_secureStateMap;
+ (BOOL)isSensorDetectedCharacteristic:(id)a0;
+ (id)presentationValueForValue:(id)a0 type:(id)a1;
+ (id)trimLeadingAndTailingDotInName:(id)a0;
+ (id)_enumerationValueLocalizationKeys;
+ (id)_localizedStateForValue:(id)a0 characteristicType:(id)a1;
+ (id)_presentationTypeForType:(id)a0;
+ (id)_sensorMap;
+ (id)bulletinReasonForChangedCharacteristic:(id)a0;
+ (id)composedNameForCharacteristic:(id)a0;
+ (BOOL)isSecureServiceType:(id)a0;
+ (id)localizedActionForCharacteristic:(id)a0;
+ (id)localizedStateForCharacteristic:(id)a0;
+ (id)localizedStringForItems:(id)a0;
+ (id)trimLeadingAndTailingSpacesInName:(id)a0;

@end
