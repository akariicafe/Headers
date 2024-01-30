@class UIColor, NSString, UIBezierPath, UIView;
@protocol WatchQuickActionAnimationHandler, WQAHostLifecycleObserver;

@interface WatchQuickAction : NSObject <WatchQuickActionHostObserver, _UIViewBoundingPathChangeObserver, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *viewToOverlay;
@property (weak, nonatomic) UIView *hostingView;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) long long visualsToken;
@property (nonatomic) long long internalQuickActionType;
@property (weak, nonatomic) id<WQAHostLifecycleObserver> hostLifecycleObserver;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) UIColor *overlayTintColor;
@property (nonatomic) BOOL allowsResizingAnimations;
@property (nonatomic) double overlayCornerRadius;
@property (nonatomic) struct CGPoint { double x; double y; } overlayInset;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) id /* block */ activationCallback;
@property (weak, nonatomic) id<WatchQuickActionAnimationHandler> animationHandler;

+ (id)quickActionFromSerializedData:(id)a0 error:(id *)a1;
+ (id)serializedDataFromQuickAction:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)startWithCallback:(id /* block */)a0;
- (void)cancel;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)start;
- (void)_boundingPathMayHaveChangedForView:(id)a0 relativeToBoundsOriginOnly:(BOOL)a1;
- (void).cxx_destruct;
- (long long)quickActionType;
- (BOOL)canShowOverlays;
- (id)quickActionPath;
- (void)_applyOverlayFromView:(id)a0 withHostingView:(id)a1;
- (void)_commonInitLocalizedTitle:(id)a0 quickActionType:(long long)a1 targetView:(id)a2 hostingView:(id)a3 withQuickActivationCallback:(id /* block */)a4 withQuickActivationEndCallback:(id /* block */)a5;
- (void)_updateOverlaysIfNecessary;
- (void)applyBezierPath:(id)a0 withHostingView:(id)a1;
- (long long)currentVisualsToken;
- (id)initWithLocalizedTitle:(id)a0 activationCallback:(id /* block */)a1;
- (id)initWithLocalizedTitle:(id)a0 targetView:(id)a1 activationCallback:(id /* block */)a2;
- (id)initWithLocalizedTitle:(id)a0 targetView:(id)a1 hostingView:(id)a2 activationCallback:(id /* block */)a3;
- (void)quickActionHostDidInvalidate;
- (id)quickActionHostingView;
- (id)quickActionPrimaryView;
- (void)updateLocalizedTitle:(id)a0;
- (void)wqa_setHostLifecycleObserver:(id)a0;

@end
