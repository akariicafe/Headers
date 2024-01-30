@interface HFActionNaturalLanguageUtilities : NSObject

+ (id)hf_naturalLanguageDescriptionForActions:(id)a0 withOptions:(id)a1;
+ (id)stringKeysForActions:(id)a0 withServiceType:(id)a1 execution:(id)a2;
+ (BOOL)actionTypesMissingDescriptionShouldCauseFailure:(id)a0;
+ (id)genericStringKeyWithNumberOfAccessories:(unsigned long long)a0 named:(BOOL)a1 options:(id)a2;
+ (id)actionValuesByTypeForActions:(id)a0 execution:(id)a1;
+ (id)stringKeyForSpecialCasesWithValuesByType:(id)a0 execution:(id)a1;
+ (id)stringKeyWithType:(id)a0 values:(id)a1 execution:(id)a2;
+ (id)selectHighestPriorityStringsFromStrings:(id)a0;
+ (id)_actionTypeForAction:(id)a0;
+ (BOOL)_shouldIgnoreActions:(id)a0 withCharacteristicType:(id)a1 execution:(id)a2;
+ (id)_valueForAction:(id)a0 withActionType:(id)a1;
+ (id)temperatureStringKeyForActions:(id)a0 execution:(id)a1;
+ (id)stringKeyForMediaPlaybackAction:(id)a0 named:(BOOL)a1 options:(id)a2;
+ (id)stringKeyForCharacteristicType:(id)a0 targetValue:(id)a1 named:(BOOL)a2 options:(id)a3;
+ (id)_actionTypeDescriptionPriority;
+ (void)characteristicCaseClassification:(id *)a0 valueKey:(id *)a1 argumentKeys:(id *)a2 fromCharacteristicType:(id)a3 targetValue:(id)a4;
+ (id)heatCoolStringKeyForState:(long long)a0 heatingThreshold:(id)a1 coolingThreshold:(id)a2 named:(BOOL)a3 options:(id)a4;
+ (id)heaterCoolerStringKeyForState:(long long)a0 active:(BOOL)a1 heatingThreshold:(id)a2 coolingThreshold:(id)a3 named:(BOOL)a4 options:(id)a5;
+ (id)temperatureStringKeyForState:(id)a0 argumentKeys:(id)a1 heatingThreshold:(id)a2 coolingThreshold:(id)a3 named:(BOOL)a4 options:(id)a5;
+ (id)_characteristicTypesFailingMismatch;

@end
