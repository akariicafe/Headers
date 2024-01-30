@class PUAssetViewModel, PUChangeDirectionValueFilter, PUBrowsingSession, NSString, PXVerticalSwipeGestureRecognizerHelper, UIPanGestureRecognizer, PXNumberAnimator;
@protocol PUAccessoryVisibilityInteractionControllerDelegate;

@interface PUAccessoryVisibilityInteractionController : NSObject <PXChangeObserver, UIGestureRecognizerDelegate, PUBrowsingViewModelChangeObserver> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    struct { BOOL contentOffset; } _needsUpdateFlags;
    struct { BOOL respondsToCanBeginAtLocationFromProvider; BOOL respondsToDidEnd; BOOL respondsToIsLocationFromProviderInAccessoryContent; BOOL respondsToSetAccessoryVisibleChangeReason; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setAssetViewModel:) PUAssetViewModel *_assetViewModel;
@property (nonatomic, setter=_setInitialContentOffset:) struct CGPoint { double x; double y; } _initialContentOffset;
@property (retain, nonatomic, setter=_setOverridingContentOffsetY:) PXNumberAnimator *_overridingContentOffsetY;
@property (retain, nonatomic, setter=_setContentOffsetOverrideFactor:) PXNumberAnimator *_contentOffsetOverrideFactor;
@property (retain, nonatomic, setter=_setVerticalDirectionValueFilter:) PUChangeDirectionValueFilter *_verticalDirectionValueFilter;
@property (retain, nonatomic, setter=_setSwipeDirectionValueFilter:) PUChangeDirectionValueFilter *_swipeDirectionValueFilter;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper;
@property (weak, nonatomic) id<PUAccessoryVisibilityInteractionControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performChanges:(id /* block */)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)invalidateViewHostingGestureRecognizers;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handlePanGestureRecognizer:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (id)_currentAssetViewModel;
- (void)_setAccessoryVisible:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateGestureRecognizers;
- (void)_invalidateContentOffset;
- (void)_handleScheduledUpdate;
- (void)_updateContentOffsetIfNeeded;

@end
