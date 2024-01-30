@class UIView, NSArray, NSUUID, UIViewPropertyAnimator, UIScreen, _UIInteractiveHighlightEffectWindow, UIVisualEffectView, UIViewFloatAnimatableProperty;

@interface _UIInteractiveHighlightEnvironment : NSObject {
    UIScreen *_containerScreen;
    _UIInteractiveHighlightEffectWindow *_containerWindow;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_contentClipView;
    UIView *_contentOverlayView;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    UIViewFloatAnimatableProperty *_backgroundEffectProgress;
    NSArray *_viewRecords;
    _UIInteractiveHighlightEnvironment *_parentEnvironment;
    _UIInteractiveHighlightEnvironment *_childEnvironment;
    NSUUID *_backgroundAnimationIdentifier;
}

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *contentClipView;
@property (retain, nonatomic) UIView *customBackgroundEffectView;
@property (copy, nonatomic) id /* block */ backgroundEffectApplyBlock;

+ (id)requestInteractiveHighlightEnvironmentForView:(id)a0;
+ (id)interactiveHighlightEnvironmentForContainerView:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithContainerView:(id)a0;
- (void)dealloc;
- (id)initWithContainerScreen:(id)a0;
- (void)removeAllViewRecords;
- (void)setUserInteractionOnContainerEnabled:(BOOL)a0;
- (void)initContainerWindowIfNeeded;
- (void)initContentViewIfNeeded;
- (long long)indexOfViewRecordForView:(id)a0;
- (id)newViewRecordForView:(id)a0 options:(unsigned long long)a1;
- (void)initBackgroundEffectViewIfNeeded;
- (id)newBackgroundEffectAnimator;
- (void)finalizeBackgroundEffect;
- (void)removeViewRecordsIfNeeded;
- (void)disableClippingForView:(id)a0 ancestorView:(id)a1;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)finalizeViewRecord:(id)a0;
- (void)finalizeContentViewIfNeeded;
- (void)applyContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)finalizeContainerWindowIfNeeded;
- (id)backgroundVisualEffectForProgress:(double)a0;
- (id)initWithParentEnvironment:(id)a0;
- (void)removeInteractiveHighlightEffect:(id)a0;
- (id)interactiveHighlightEffectForView:(id)a0 options:(unsigned long long)a1;
- (void)applyBackgroundEffectWithMagnitude:(double)a0 interactive:(BOOL)a1 completion:(id /* block */)a2;
- (id)contentView;

@end
