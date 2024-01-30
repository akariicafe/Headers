@class NSString, CSSearchQueryContext;

@interface _CSQueryRewrite : NSObject

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) CSSearchQueryContext *searchQueryContext;
@property (nonatomic) float score;

- (void).cxx_destruct;
- (id)initWithSearchQueryString:(id)a0 searchQueryContext:(id)a1 score:(float)a2;

@end
