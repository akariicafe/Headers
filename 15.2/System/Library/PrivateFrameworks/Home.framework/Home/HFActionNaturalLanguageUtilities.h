@interface HFActionNaturalLanguageUtilities : NSObject

+ (id)hf_naturalLanguageDescriptionForActions:(id)a0 withOptions:(id)a1;
+ (id)stringKeysForActions:(id)a0 withServiceType:(id)a1 execution:(id)a2;
+ (BOOL)actionTypesMissingDescriptionShouldCauseFailure:(id)a0;
+ (id)lightbulbStringKeyWithExecution:(id)a0;
+ (id)shortcutsStringKeyWithExecution:(id)a0;
+ (id)genericStringKeyWithNumberOfAccessories:(unsigned long long)a0 named:(BOOL)a1 inContext:(BOOL)a2 options:(id)a3;
+ (id)actionValuesByTypeForActions:(id)a0 execution:(id)a1;
+ (id)stringKeyForSpecialCasesWithValuesByType:(id)a0 execution:(id)a1 characteristics:(id)a2;
+ (id)stringKeyWithType:(id)a0 values:(id)a1 execution:(id)a2;
+ (id)selectHighestPriorityStringsFromStrings:(id)a0;
+ (id)_actionTypeForAction:(id)a0;
+ (BOOL)_shouldIgnoreActions:(id)a0 withCharacteristicType:(id)a1 execution:(id)a2;
+ (id)_valueForAction:(id)a0 withActionType:(id)a1;
+ (id)temperatureStringKeyForActions:(id)a0 execution:(id)a1 characteristics:(id)a2;
+ (id)stringKeyForMediaPlaybackAction:(id)a0 named:(BOOL)a1 options:(id)a2;
+ (id)stringKeyForCharacteristicType:(id)a0 targetValue:(id)a1 named:(BOOL)a2 options:(id)a3;
+ (id)_actionTypeDescriptionPriority;
+ (void)characteristicCaseClassification:(id *)a0 valueKey:(id *)a1 argumentKeys:(id *)a2 fromCharacteristicType:(id)a3 targetValue:(id)a4;
+ (id)_actionValue:(id)a0 forCharacteristicType:(id)a1;
+ (id)_relativePercentValueInActions:(id)a0 characteristics:(id)a1 characteristicType:(id)a2;
+ (id)_characteristicTypesFailingMismatch;

@end
