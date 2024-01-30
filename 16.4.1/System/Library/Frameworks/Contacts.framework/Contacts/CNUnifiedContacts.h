@interface CNUnifiedContacts : NSObject

+ (BOOL)shouldIncludeLabeledValue:(id)a0 fromSource:(id)a1 inDestination:(id)a2 forProperty:(id)a3;
+ (void)addLinkedLabeledValue:(id)a0 toLabeledValue:(id)a1 forProperty:(id)a2;
+ (BOOL)canUnifyLabel:(id)a0 withLabel:(id)a1 forProperty:(id)a2;
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)a0 value:(id)a1 inMultiValue:(id)a2 forProperty:(id)a3;
+ (unsigned long long)countOfLabelsUnifiableWithLabel:(id)a0 valuesUnifiableWithValue:(id)a1 inMultiValue:(id)a2 forProperty:(id)a3;
+ (BOOL)doesMultiValue:(id)a0 needLabeledValue:(id)a1 fromMultiValue:(id)a2 forProperty:(id)a3;
+ (id)firstNonNilValueForProperty:(id)a0 inContacts:(id)a1;
+ (id)imageValuePropertiesByKey;
+ (id)imageValuePropertyKeys;
+ (unsigned long long)indexOfPreferredContactForImage:(id)a0;
+ (unsigned long long)indexOfValueMostInferiorTo:(id)a0 inMultiValue:(id)a1 forProperty:(id)a2;
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)a0 inMultiValue:(id)a1 forProperty:(id)a2;
+ (id)indexesOfValuesInferiorTo:(id)a0 inMultiValue:(id)a1 forProperty:(id)a2;
+ (id)makeNonNameSingleValuePropertiesByKey;
+ (id)nonNameSingleValuePropertiesByKey;
+ (void)replaceInferiorValueInMultiValue:(id)a0 withEntryAtIndex:(unsigned long long)a1 fromMultiValue:(id)a2 forProperty:(id)a3;
+ (BOOL)shouldLabeledValue:(id)a0 replaceInferiorValueInMultiValue:(id)a1 forProperty:(id)a2;
+ (id)unifiedIdentifiersForLabeledValue:(id)a0 inUnifiedMap:(id)a1 forProperty:(id)a2;
+ (id)unifiedIdentifiersForValue:(id)a0 inUnifiedMap:(id)a1 forProperty:(id)a2;
+ (id)unifyAvailableKeysOfContacts:(id)a0;
+ (void)unifyImageOfContacts:(id)a0 intoContact:(id)a1 availableKeyDescriptor:(id)a2;
+ (void)unifyNamesOfContacts:(id)a0 withPreferredContact:(id)a1 intoContact:(id)a2 availableKeyDescriptor:(id)a3;
+ (void)unifyNonNameSingleValuesOfContacts:(id)a0 withPreferredContact:(id)a1 intoContact:(id)a2 availableKeyDescriptor:(id)a3;
+ (void)unifySingleValuesProperties:(id)a0 ofContacts:(id)a1 intoContact:(id)a2 availableKeyDescriptor:(id)a3;

@end
