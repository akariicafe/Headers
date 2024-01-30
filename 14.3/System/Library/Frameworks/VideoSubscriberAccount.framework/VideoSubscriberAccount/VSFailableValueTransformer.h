@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSValueTransformer *objectValueTransformer;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;

@end
