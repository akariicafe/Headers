@interface HAPValueTransformer : HMFObject

+ (Class)expectedClassForFormat:(unsigned long long)a0;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)a0;

- (id)reverseTransformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (id)transformedValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
