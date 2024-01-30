@interface INIntentEnergySlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (long long)_intents_valueType;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (Class)_intents_resolutionResultClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
