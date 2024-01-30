@class JTImage, NSString;

@interface JFXImageIOSurfaceView : UIView <JFXImageViewRendering>

@property (retain, nonatomic) JTImage *jtImage;
@property (readonly, nonatomic) long long renderingType;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) BOOL enableDebugDrawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDebugDrawing;
- (void)setRenderingType:(long long)a0;
- (void).cxx_destruct;
- (void)JFXImageIOSurfaceView_commonInit;

@end
