@class NSString, IKMutableArray;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

@property (retain, nonatomic) NSString *type;
@property BOOL negated;

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (id)description;
- (unsigned long long)count;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (void)addQuery:(id)a0;
- (id)expressionList;

@end
