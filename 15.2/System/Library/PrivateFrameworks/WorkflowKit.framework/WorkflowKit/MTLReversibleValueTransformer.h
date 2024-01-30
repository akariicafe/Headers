@interface MTLReversibleValueTransformer : MTLValueTransformer

+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)initWithForwardBlock:(id /* block */)a0 reverseBlock:(id /* block */)a1;
- (id)reverseTransformedValue:(id)a0 success:(BOOL *)a1 error:(id *)a2;

@end
