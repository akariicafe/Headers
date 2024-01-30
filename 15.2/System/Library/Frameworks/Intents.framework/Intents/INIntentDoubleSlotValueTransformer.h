@interface INIntentDoubleSlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (long long)_intents_valueType;
+ (Class)_intents_resolutionResultClass;
+ (Class)reverseTransformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
