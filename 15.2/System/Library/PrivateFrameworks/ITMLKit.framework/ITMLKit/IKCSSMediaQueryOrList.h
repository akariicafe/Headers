@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (BOOL)evaluate;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (id)subQueryList;
- (void)addSubQueryList:(id)a0;

@end
