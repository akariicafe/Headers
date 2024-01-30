@interface EDAccountECAccountTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)transformAccount:(id)a0;
- (id)transformDeliveryAccount:(id)a0;
- (id)transformReceivingAccount:(id)a0;

@end
