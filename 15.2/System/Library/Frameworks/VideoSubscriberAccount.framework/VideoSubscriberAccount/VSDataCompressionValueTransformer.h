@interface VSDataCompressionValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)_dataByPerformingOperation:(int)a0 onData:(id)a1;

@end
