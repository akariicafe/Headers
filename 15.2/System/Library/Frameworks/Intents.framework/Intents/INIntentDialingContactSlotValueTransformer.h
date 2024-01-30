@interface INIntentDialingContactSlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (long long)_intents_valueType;
+ (Class)reverseTransformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
