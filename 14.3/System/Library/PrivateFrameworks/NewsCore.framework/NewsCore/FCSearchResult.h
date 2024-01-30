@class FCTagSearchOperationResult, FCArticleSearchOperationResult;

@interface FCSearchResult : NSObject

@property (retain, nonatomic) FCTagSearchOperationResult *tagSearchResult;
@property (retain, nonatomic) FCArticleSearchOperationResult *articleSearchResult;

- (void).cxx_destruct;

@end
