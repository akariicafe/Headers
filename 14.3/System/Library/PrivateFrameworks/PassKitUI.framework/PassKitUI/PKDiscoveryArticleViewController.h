@class UILabel, NSString, UIScreenEdgePanGestureRecognizer, NSObject, PKDiscoveryCardView, PKDiscoveryDismissButton, NSMutableDictionary, UIPanGestureRecognizer, UICollectionView, PKDiscoveryArticleAnimatedTransitioningHandler, PKDiscoveryArticleLayout, UIActivityIndicatorView;
@protocol OS_dispatch_queue;

@interface PKDiscoveryArticleViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PKDiscoveryCardViewDelegate, PKPaymentSetupDelegate> {
    PKDiscoveryArticleAnimatedTransitioningHandler *_transitioningHandler;
    PKDiscoveryArticleLayout *_articleLayout;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
    PKDiscoveryDismissButton *_dismissButton;
    BOOL _isDownloading;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_downloadingLabel;
    NSString *_referrerIdentifierOverride;
    id /* block */ _callToActionTappedOverride;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;
    NSMutableDictionary *_cellImageCache;
    NSMutableDictionary *_imageDownloads;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockDownloads;
    NSObject<OS_dispatch_queue> *_loadImageQueue;
}

@property (nonatomic) BOOL shouldHideStatusBar;
@property (readonly, nonatomic) PKDiscoveryCardView *cardView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL hasSafeAreaInsetOverride;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaOverrideInsets;
@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard;
@property (nonatomic, getter=shouldUseCustomPresentation) BOOL useCustomPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (BOOL)prefersStatusBarHidden;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)modalTransitionStyle;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)discoveryCardViewCTATapped:(id)a0 callToAction:(id)a1;
- (void)setCallToActionTappedOverride:(id /* block */)a0;
- (void)dealloc;
- (void)setIsDownloading:(BOOL)a0;
- (void)_systemTextSizeChanged;
- (void)loadView;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (long long)modalPresentationStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)_dismissButtonTapped;
- (long long)_dismissButtonStyleForCard;
- (void)_leftScreenEdgePanSwipeGesture:(id)a0;
- (void)_updateDismissButtonIfNecessary;
- (void)_dismissForActionCompleted:(BOOL)a0 withRelevantPassUniqueIdentifier:(id)a1;
- (id)_shelfForIndexPath:(id)a0;
- (void)_performProvisioningCTATapped:(id)a0 callToAction:(id)a1;
- (BOOL)_hasCardInGalleryView;
- (void)_configureInlineMediaShelfView:(id)a0 forInlineMediaShelf:(id)a1 atIndexPath:(id)a2;
- (void)_configureCallToActionShelfView:(id)a0 forCallToActionShelf:(id)a1 atIndexPath:(id)a2;
- (void)_loadMedia:(id)a0 forShelfViewAtIndexPath:(id)a1 completion:(id /* block */)a2;
- (id)initWithItemIdentifier:(id)a0 referrerIdentifier:(id)a1;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithArticleLayout:(id)a0 referrerIdentifier:(id)a1;
- (void)setArticleLayout:(id)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_handlePanGesture:(id)a0;
- (void)paymentSetupDidFinish:(id)a0;
- (void)viewWillLayoutSubviews;

@end
