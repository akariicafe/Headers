@class UIColor;

@interface VFXCore.VFXCoreView : UIView {
    void /* unknown type, empty encoding */ displayClockHandle;
    void /* unknown type, empty encoding */ renderTargetHandle;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ colorPixelFormat;
    void /* unknown type, empty encoding */ depthStencilPixelFormat;
    void /* unknown type, empty encoding */ sampleCount;
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ paused;
    void /* unknown type, empty encoding */ sizeDirty;
    void /* unknown type, empty encoding */ drawableSize;
    void /* unknown type, empty encoding */ isTicking;
    void /* unknown type, empty encoding */ _currentDrawable;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, retain) UIColor *backgroundColor;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
