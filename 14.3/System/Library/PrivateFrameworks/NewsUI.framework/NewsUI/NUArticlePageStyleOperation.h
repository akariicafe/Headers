@class NUPageStyle, FCArticle;

@interface NUArticlePageStyleOperation : FCOperation

@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) unsigned long long pageNextAction;
@property (readonly, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NUPageStyle *pageStyle;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationDidFinishWithError:(id)a0;
- (id)initWithArticle:(id)a0 pageNextAction:(unsigned long long)a1 completion:(id /* block */)a2;

@end
