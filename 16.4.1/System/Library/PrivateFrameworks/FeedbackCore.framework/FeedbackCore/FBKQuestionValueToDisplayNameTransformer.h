@class NSDictionary;

@interface FBKQuestionValueToDisplayNameTransformer : NSValueTransformer

@property (copy) NSDictionary *dictionary;

+ (Class)transformedValueClass;

- (id)initWithDictionary:(id)a0;
- (id)transformedValue:(id)a0;
- (void).cxx_destruct;

@end
