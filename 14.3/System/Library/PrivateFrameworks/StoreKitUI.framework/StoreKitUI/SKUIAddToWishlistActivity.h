@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIAddToWishlistActivity : UIActivity {
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

- (id)activityType;
- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithItem:(id)a0 clientContext:(id)a1;

@end
