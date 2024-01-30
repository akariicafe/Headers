@interface INIntentPowerSlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
