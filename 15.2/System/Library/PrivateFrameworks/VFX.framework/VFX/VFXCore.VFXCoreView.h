@class UIColor;

@interface VFXCore.VFXCoreView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ renderTargetHandle;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ sampleCount;
    void /* unknown type, empty encoding */ preferredFramesPerSecond;
    void /* unknown type, empty encoding */ scaleFactor;
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ paused;
    void /* unknown type, empty encoding */ effectID;
    void /* unknown type, empty encoding */ sizeDirty;
    void /* unknown type, empty encoding */ drawableSize;
    void /* unknown type, empty encoding */ resizingMode;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) BOOL hidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, retain) UIColor *backgroundColor;

- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)isHidden;

@end
