@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject

@property (readonly, nonatomic) IKCSSMediaQueryList *queryList;
@property (readonly) BOOL evaluated;
@property (readonly) BOOL evaluationResult;

+ (id)buildMediaQueryList:(id)a0 offset:(unsigned long long)a1 consumed:(unsigned long long *)a2;
+ (id)buildMediaQuery:(id)a0 offset:(unsigned long long)a1 consumed:(unsigned long long *)a2;
+ (id)buildMediaQueryExpression:(id)a0;
+ (id)mediaQueryFromTokenList:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (id)initWithQueryList:(id)a0;
- (id)queryExpression;
- (void)setNeedsReEvaluation;

@end
