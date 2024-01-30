@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSArray *valueTransformers;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
