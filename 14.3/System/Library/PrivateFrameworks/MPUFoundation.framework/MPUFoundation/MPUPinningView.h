@class CALayer, UIView;

@interface MPUPinningView : UIView {
    UIView *_containerView;
    CALayer *_effectivePinningSourceLayer;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *pinningSourceView;
@property (retain, nonatomic) CALayer *pinningSourceLayer;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_prepareForDefaultImageSnapshotNotification:(id)a0;
- (void)_unregisterKVOObserversForLayer:(id)a0;
- (void)_configureMatchMoveAnimation;
- (BOOL)_updateEffectivePinningSourceView;
- (void)_registerKVOObserversForLayer:(id)a0;

@end
