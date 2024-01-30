@class NSString, FCFeedGroup;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (readonly, nonatomic) NSString *articleList;
@property (readonly, nonatomic) FCFeedGroup *group;
@property (copy, nonatomic) id /* block */ headlineFilter;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithContext:(id)a0 articleList:(id)a1 group:(id)a2;

@end
