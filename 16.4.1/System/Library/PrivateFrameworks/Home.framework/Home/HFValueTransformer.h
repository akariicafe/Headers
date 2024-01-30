@interface HFValueTransformer : NSObject

@property (retain, nonatomic) Class valueClass;
@property (copy, nonatomic) id /* block */ transformBlock;
@property (copy, nonatomic) id /* block */ reverseTransformBlock;

+ (id)identityTransformer;
+ (id)transformerForValueClass:(Class)a0 transformBlock:(id /* block */)a1 reverseTransformBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)transformedValueForValue:(id)a0;
- (id)valueForTransformedValue:(id)a0;

@end
