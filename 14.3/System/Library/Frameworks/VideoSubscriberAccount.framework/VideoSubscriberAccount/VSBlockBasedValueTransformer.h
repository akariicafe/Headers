@interface VSBlockBasedValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ transformationBlock;
@property (copy, nonatomic) id /* block */ reverseTransformationBlock;

- (id)init;
- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;

@end
