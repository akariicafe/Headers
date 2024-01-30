@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (id)description;
- (unsigned long long)count;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (id)subQueryList;
- (void)addSubQueryList:(id)a0;

@end
