@interface INIntentDictionarySlotValueTransformer : NSValueTransformer

+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
