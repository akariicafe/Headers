@class NSString, IKMutableArray;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

@property (retain, nonatomic) NSString *type;
@property BOOL negated;

- (BOOL)evaluate;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addQuery:(id)a0;
- (id)expressionAsString;
- (id)expressionList;
- (id)subQueryAtIndex:(unsigned long long)a0;

@end
