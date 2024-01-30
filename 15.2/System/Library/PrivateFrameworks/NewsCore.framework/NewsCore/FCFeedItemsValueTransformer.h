@interface FCFeedItemsValueTransformer : NSValueTransformer

+ (void)registerIfNeeded;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
