@class UIView, NSString, PUTransitionViewAnimator, NSSet, PUPhotoPinchGestureRecognizer, PHCollection, PUStackedAlbumTransitionLayout, PUStackedAlbumLayout, UIViewController;
@protocol PLAssetContainer, PUStackedAlbumControllerTransition, PUStackedAlbumTransitionDelegate;

@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _popTransitionInitialVisibleBounds;
    NSSet *_popTransitionInitialVisibleStackedAssetIndexPaths;
    UIView *_animatorView;
    BOOL _didAnimateRoundedCorners;
}

@property (nonatomic, setter=_setExpanding:) BOOL isExpanding;
@property (weak, nonatomic, setter=_setTransitionLayout:) PUStackedAlbumLayout *_transitionLayout;
@property (retain, nonatomic, setter=_setInteractiveTransitionLayout:) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout;
@property (retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator;
@property (retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
@property (retain, nonatomic, setter=_setDisableToken:) id _disableToken;
@property (readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *fromViewController;
@property (readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *toViewController;
@property (retain, nonatomic) id<PLAssetContainer> photoCollection;
@property (retain, nonatomic, setter=ph_setPhotoCollection:) PHCollection *ph_photoCollection;
@property (weak, nonatomic) id<PUStackedAlbumTransitionDelegate> delegate;
@property (nonatomic, setter=setForStandInAlbum:) BOOL isForStandInAlbum;
@property (nonatomic, getter=isForFolder) BOOL forFolder;
@property (nonatomic) struct CGPoint { double x; double y; } interactionCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)animatePushTransition;
- (void)transitionViewAnimatorDidUpdate:(id)a0;
- (void)transitionViewAnimatorWillEnd:(id)a0 withTargetTranslation:(inout struct CGPoint { double x0; double x1; } *)a1;
- (void)transitionViewAnimatorDidEnd:(id)a0 finished:(BOOL)a1;
- (void)animatePopTransition;
- (void)completeInteractiveOperation:(long long)a0 finished:(BOOL)a1;
- (BOOL)collectionViewLayoutShouldProvideCustomAnimations:(id)a0;
- (void)collectionViewLayout:(id)a0 willSupplyLayoutAttributes:(id)a1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)a0 isExpanding:(BOOL)a1;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)a0;
- (id)_newInteractiveTransitionViewAnimatorForLayout:(id)a0 collectionView:(id)a1;
- (id)_newTransitionLayoutWithStackedAlbumLayout:(id)a0 otherLayout:(id)a1 forPush:(BOOL)a2;
- (id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)a0;

@end
