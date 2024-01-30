@protocol NUArticleHostViewControllerFactory, NUArticleActivityFactory, NUArticleFactory;

@interface NUArticlePageFactory : NSObject

@property (readonly, nonatomic) id<NUArticleFactory> articleFactory;
@property (readonly, nonatomic) id<NUArticleHostViewControllerFactory> articleHostViewControllerFactory;
@property (readonly, nonatomic) id<NUArticleActivityFactory> articleActivityFactory;

- (void).cxx_destruct;
- (id)createPagesForArticleIDs:(id)a0;
- (id)initWithArticleFactory:(id)a0 articleActivityFactory:(id)a1 articleHostViewControllerFactory:(id)a2;

@end
