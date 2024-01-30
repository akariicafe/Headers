@interface HAPJSONValueTransformer : HAPValueTransformer

+ (void)initialize;
+ (id)defaultJSONValueTransformer;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)a0;

- (id)reverseTransformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (id)transformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
