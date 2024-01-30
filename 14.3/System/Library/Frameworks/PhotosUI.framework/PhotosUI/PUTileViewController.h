@class NSTimer, NSArray, UIView;

@interface PUTileViewController : PUTileController

@property (retain, nonatomic, setter=_setView:) UIView *view;
@property (retain, nonatomic, setter=_setContentView:) UIView *contentView;
@property (retain, nonatomic, setter=_setLoadedView:) UIView *loadedView;
@property (nonatomic, getter=_isLoadingView, setter=_setLoadingView:) BOOL _loadingView;
@property (retain, nonatomic, setter=_setTintView:) UIView *_tintView;
@property (retain, nonatomic, setter=_setVisibleRectView:) UIView *_visibleRectView;
@property (copy, nonatomic, setter=_setOnReadyToDisplayBlock:) id /* block */ _onReadyToDisplayBlock;
@property (retain, nonatomic, setter=_setReadinessTimer:) NSTimer *_readinessTimer;
@property (nonatomic, setter=_setEdgeAntialiasingEnabled:) BOOL _edgeAntialiasingEnabled;
@property (retain, nonatomic, setter=_setMaskView:) UIView *_maskView;
@property (retain, nonatomic, setter=_setGestureRecognizers:) NSArray *gestureRecognizers;
@property (nonatomic, setter=_setReadyForDisplay:) BOOL isReadyForDisplay;
@property (readonly, nonatomic) BOOL isViewLoaded;
@property (nonatomic, getter=isContentViewEnabled) BOOL contentViewEnabled;
@property (readonly, nonatomic) UIView *originalView;

- (void)didChangeVisibleRect;
- (void)applyLayoutInfo:(id)a0;
- (BOOL)wantsVisibleRectChanges;
- (void).cxx_destruct;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)a0 completionHandler:(id /* block */)a1;
- (BOOL)isPresentationActive;
- (void)_updateDynamicStateDebugging;
- (void)_updateTintView;
- (void)_invalidateTintView;
- (void)_updateVisibleRectView;
- (void)_handleReadinessForced:(BOOL)a0;
- (void)dealloc;
- (void)setEdgeAntialiasingEnabled:(BOOL)a0;
- (void)prepareForReuse;
- (id)loadView;
- (id)presentationLayoutInfo;
- (void)addToTilingView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)removeAllAnimations;
- (void)becomeReusable;
- (void)viewDidLoad;

@end
