@interface SGWordBoundaryQuickTypeInference : NSObject

+ (id)quickTypeTriggerForContext:(id)a0 localeIdentifier:(id)a1 modelConfigPath:(id)a2 espressoBinFilePath:(id)a3;
+ (id)quickTypeTriggerForContext:(id)a0 localeIdentifier:(id)a1 modelConfigPath:(id)a2 espressoBinFilePath:(id)a3 useContactNames:(BOOL)a4;
+ (BOOL)_probablePriorPredictionInContext:(id)a0 predictedLabel:(long long)a1;

@end
