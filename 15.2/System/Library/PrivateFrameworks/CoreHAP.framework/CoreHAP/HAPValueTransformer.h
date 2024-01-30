@interface HAPValueTransformer : HMFObject

+ (Class)expectedTransformedClassForFormat:(unsigned long long)a0;
+ (Class)expectedClassForFormat:(unsigned long long)a0;

- (id)transformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (id)reverseTransformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
