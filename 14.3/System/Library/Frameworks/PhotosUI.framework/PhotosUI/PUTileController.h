@class NSString, PUTileLayoutInfo, NSMutableArray, PUTilingView;

@interface PUTileController : NSObject

@property (retain, nonatomic) NSMutableArray *reasonsToSuppressAnimatedUpdates;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (nonatomic, getter=isReusable) BOOL reusable;
@property (nonatomic) long long animationCount;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, weak, nonatomic) PUTilingView *tilingView;
@property (readonly, nonatomic) PUTileLayoutInfo *layoutInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) BOOL wantsVisibleRectChanges;
@property (readonly, nonatomic) BOOL isPresentationActive;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) PUTileLayoutInfo *presentationLayoutInfo;
@property (nonatomic) BOOL shouldPreserveCurrentContent;
@property (readonly, nonatomic) BOOL shouldAvoidInPlaceSnapshottedFadeOut;
@property (readonly, nonatomic) BOOL shouldSuppressAnimatedUpdates;

- (void)didChangeVisibleRect;
- (void)applyLayoutInfo:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generateAssetTransitionInfo;
- (void)stopSuppressingAnimatedUpdatesWithReason:(id)a0;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)a0 completionHandler:(id /* block */)a1;
- (void)startSuppressingAnimatedUpdatesWithReason:(id)a0;
- (BOOL)adoptAssetTransitionInfo:(id)a0;
- (void)didEndAnimation:(long long)a0;
- (long long)willBeginAnimation;
- (void)reuseIfApplicable;
- (id)freeze;
- (void)didChangeAnimating;
- (void)prepareForReuse;
- (void)addToTilingView:(id)a0;
- (void)removeAllAnimations;
- (void)becomeReusable;
- (void)setPreloadedImage:(id)a0;
- (void)setTilingView:(id)a0;
- (id)description;
- (void)setLayoutInfo:(id)a0;
- (void)didChangeActive;
- (id)initWithReuseIdentifier:(id)a0;

@end
