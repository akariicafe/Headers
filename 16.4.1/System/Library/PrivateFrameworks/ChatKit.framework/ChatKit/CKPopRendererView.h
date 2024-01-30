@interface CKPopRendererView : UIView {
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ sourceTexture;
    void /* unknown type, empty encoding */ isStarted;
    void /* unknown type, empty encoding */ isSoundPlayed;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ renderScale;
}

@property (class, nonatomic, readonly) double duration;

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)didEnterBackgroundFrom:(id)a0;
- (void)drawFrom:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)playWithSourceView:(id)a0;
- (void)willEnterForegroundFrom:(id)a0;

@end
