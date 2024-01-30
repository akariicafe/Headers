@interface IKCSSMediaQueryList : NSObject

- (BOOL)evaluate;
- (unsigned long long)count;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;

@end
