@class PKRemoteImagePreparer;
@protocol PKRewardsHubSectionControllerDelegate;

@interface PKAccountPromotionsPresenter : NSObject {
    PKRemoteImagePreparer *_remoteImagePreparer;
    id<PKRewardsHubSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)configureCell:(id)a0 withPromotion:(id)a1;
- (void)dispatchActionForLink:(id)a0 linkedApplication:(id)a1 promotion:(id)a2;
- (id)initWithRemoteImagePreparer:(id)a0 delegate:(id)a1;

@end
