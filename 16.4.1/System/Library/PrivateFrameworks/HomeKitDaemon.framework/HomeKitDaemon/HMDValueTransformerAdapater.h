@class NSValueTransformer;

@interface HMDValueTransformerAdapater : HMDValueTransformer {
    NSValueTransformer *_transformer;
}

+ (Class)transformedValueClass;
+ (Class)valueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithTransformer:(id)a0;
- (BOOL)isKindOfTransformer:(Class)a0;

@end
