@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSArray *valueTransformers;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
