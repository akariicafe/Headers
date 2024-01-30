@interface VSBlockBasedValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ transformationBlock;
@property (copy, nonatomic) id /* block */ reverseTransformationBlock;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
