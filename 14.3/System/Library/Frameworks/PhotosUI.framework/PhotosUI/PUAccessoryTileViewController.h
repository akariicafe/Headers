@class PUAssetViewModel, PUAssetReference, NSString, UIView, UIViewController;
@protocol PUAccessoryTileViewControllerDelegate, PUAccessoryContentViewController;

@interface PUAccessoryTileViewController : PUTileViewController <PUAccessoryContentViewControllerDelegate> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    struct { BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToWillHideToolbarWhenShowingAccessoryView; } _delegateFlags;
    struct { BOOL contentViewController; BOOL loadedContentViewController; BOOL contentViewMetrics; BOOL contentBounds; BOOL masterContentOffset; } _needsUpdateFlags;
}

@property (retain, nonatomic, setter=_setContentViewController:) UIViewController<PUAccessoryContentViewController> *_contentViewController;
@property (retain, nonatomic, setter=_setLoadedContentViewController:) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController;
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (nonatomic, setter=_setContentBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentBounds;
@property (nonatomic, setter=_setUntransformedMasterContentFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _untransformedMasterContentFrame;
@property (nonatomic, setter=_setContentInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
@property (nonatomic, setter=_setKeyboardFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
@property (nonatomic, setter=_setContentInsetsChangeReason:) long long _contentInsetsChangeReason;
@property (nonatomic, setter=_setMinimumVisibleHeight:) double _minimumVisibleHeight;
@property (nonatomic, setter=_setWasActiveOnLastMasterContentOffsetChange:) BOOL _wasActiveOnLastMasterContentOffsetChange;
@property (nonatomic, setter=_setEditorHeightDelta:) double _editorHeightDelta;
@property (weak, nonatomic) id<PUAccessoryTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performChanges:(id /* block */)a0;
- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_keyboardWillShow:(id)a0;
- (void)dealloc;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_keyboardWillHide:(id)a0;
- (void)becomeReusable;
- (void)_invalidateContentBounds;
- (void)_handleScheduledUpdate;
- (id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)a0;
- (void)didChangeActive;
- (void)accessoryContentViewControllerContentBoundsDidChange:(id)a0;
- (void)accessoryContentViewController:(id)a0 editorHeightDidChange:(double)a1;
- (BOOL)isLocationFromProviderInContentArea:(id)a0;
- (void)_invalidateContentViewController;
- (void)_updateContentViewControllerIfNeeded;
- (void)_invalidateLoadedContentViewController;
- (void)_invalidateContentViewMetrics;
- (void)_updateLoadedContentViewControllerIfNeeded;
- (void)_updateContentViewMetricsIfNeeded;
- (void)_updateContentBoundsIfNeeded;
- (void)_invalidateMasterContentOffset;
- (void)_updateMasterContentOffsetIfNeeded;
- (void)viewDidLoad;
- (id)initWithReuseIdentifier:(id)a0;

@end
