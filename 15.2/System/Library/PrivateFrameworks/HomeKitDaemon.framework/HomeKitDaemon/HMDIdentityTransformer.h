@interface HMDIdentityTransformer : NSValueTransformer

@property (class, readonly) HMDIdentityTransformer *sharedIdentityTransformer;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
