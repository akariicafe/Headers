@interface INIntentArchivedObjectSlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (long long)_intents_valueType;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
