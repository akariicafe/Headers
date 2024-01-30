@class NSString, IKMutableArray;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

@property (retain, nonatomic) NSString *type;
@property BOOL negated;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (BOOL)evaluate;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (void)addQuery:(id)a0;
- (id)expressionList;

@end
