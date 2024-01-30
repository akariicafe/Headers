@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

- (BOOL)evaluate;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addSubQueryList:(id)a0;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (id)subQueryList;

@end
