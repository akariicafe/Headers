@protocol _UILumaTrackingBackdropViewDelegate;

@interface _UILumaTrackingBackdropView : UIView {
    unsigned long long _backgroundLuminanceLevel;
    struct { double minimum; double maximum; } _transitionPoints;
}

@property (readonly, weak, nonatomic) id<_UILumaTrackingBackdropViewDelegate> delegate;
@property (nonatomic) struct { double minimum; double maximum; } transitionBoundaries;
@property (readonly, nonatomic) unsigned long long backgroundLuminanceLevel;
@property (nonatomic, getter=isPaused) BOOL paused;

+ (Class)layerClass;

- (void)_didChangeLuma:(id)a0;
- (void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_backdropLayer;
- (void)backdropLayer:(id)a0 didChangeLuma:(double)a1;
- (id)initWithTransitionBoundaries:(struct { double x0; double x1; })a0 delegate:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
