@interface HREDerivedActionUtilities : NSObject

+ (id)actionTypeAlias;
+ (id)_derivedActionForActionableObject:(id)a0 actionType:(id)a1 actions:(id)a2;
+ (id)_derivedActionForCharacteristic:(id)a0 withExistingValues:(id)a1;
+ (id)_derivedActionForMediaProfiles:(id)a0 withExistingValues:(id)a1;
+ (id)_filterActions:(id)a0 withAccessoriesPassingTest:(id /* block */)a1;
+ (id)_filterActions:(id)a0 withUnmatchedCharacteristicTypes:(id)a1;
+ (id)_serviceTypesExtrapolatingFromWholeHome;
+ (id)_serviceTypesExtrapolatingFromZones;
+ (id)actionType:(id)a0;
+ (id)actionTypeForActionClass:(Class)a0;
+ (id)actionTypeForCharacteristic:(id)a0;
+ (id)actionTypeForServiceType:(id)a0 characteristicType:(id)a1;
+ (id)actionTypesForProfile:(id)a0;
+ (id)characteristicTypeAlias;
+ (id)derivedActionsForActionableObjects:(id)a0 fromActions:(id)a1;
+ (id)serviceTypeAlias;

@end
