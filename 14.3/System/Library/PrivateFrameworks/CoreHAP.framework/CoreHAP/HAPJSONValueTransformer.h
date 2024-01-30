@interface HAPJSONValueTransformer : HAPValueTransformer

+ (void)initialize;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)a0;
+ (id)defaultJSONValueTransformer;

- (id)transformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (id)reverseTransformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
