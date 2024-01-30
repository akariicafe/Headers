@class SKUIReviewConfiguration, UIWindow, SKUIClientContext;

@interface SKUIStarRatingQueue : NSObject {
    SKUIClientContext *_clientContext;
    SKUIReviewConfiguration *_reviewConfiguration;
}

@property (weak, nonatomic) UIWindow *window;

- (id)init;
- (void).cxx_destruct;
- (void)_setRating:(long long)a0 forItemID:(id)a1 account:(id)a2 completionBlock:(id /* block */)a3;
- (id)initWithClientContext:(id)a0 reviewConfiguration:(id)a1;
- (void)setRating:(long long)a0 forItemID:(id)a1 completionBlock:(id /* block */)a2;

@end
