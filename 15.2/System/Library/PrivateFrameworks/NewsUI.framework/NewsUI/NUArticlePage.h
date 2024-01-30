@class FCArticle, UIViewController, NSString, NUPageStyle, FCAsyncOnceOperation;
@protocol FCOperationCanceling, NUActivityProvider, NUArticleHostViewControllerFactory, NUArticleActivityFactory, NUPageable;

@interface NUArticlePage : NSObject <NUPage>

@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) id<NUArticleHostViewControllerFactory> articleHostViewControllerFactory;
@property (readonly, nonatomic) id<NUArticleActivityFactory> articleActivityFactory;
@property (retain, nonatomic) NUPageStyle *pageStyle;
@property (retain, nonatomic) id<NUActivityProvider> activityProvider;
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (retain, nonatomic) id<FCOperationCanceling> asyncOnceCancelHandler;
@property (retain, nonatomic) UIViewController<NUPageable> *articleViewController;
@property (nonatomic) unsigned long long pageNextAction;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL allowNeighboringAdvertising;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepare;
- (id)viewController;
- (void).cxx_destruct;
- (void)unprepare;
- (id)asyncOnceLoadPageStyle:(id /* block */)a0;
- (void)pageStyling:(id /* block */)a0;
- (void)activityProvider:(id /* block */)a0;
- (id)initWithArticle:(id)a0 articleHostViewControllerFactory:(id)a1 articleActivityFactory:(id)a2 pageNextAction:(unsigned long long)a3;

@end
