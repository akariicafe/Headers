@interface CKImageTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (void)registerValueTransformer;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
