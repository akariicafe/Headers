@interface NSLikePredicateOperator : NSMatchingPredicateOperator

- (id)symbol;
- (BOOL)_shouldEscapeForLike;
- (SEL)selector;

@end
