@interface INIntentCarChargingConnectorPowerSlotValueTransformer : NSValueTransformer

+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
