@class SKUIFacebookLikeStatus, SKUIClientContext, SKUIReviewsFacebookView;
@protocol SKUIReviewsFacebookViewControllerDelegate;

@interface SKUIReviewsFacebookViewController : UIViewController {
    SKUIReviewsFacebookView *_facebookView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
@property (weak, nonatomic) id<SKUIReviewsFacebookViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_changeStatusToUserLiked:(BOOL)a0;
- (void)_reloadFacebookView;
- (void)_toggleLike:(id)a0;

@end
