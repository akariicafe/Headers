@class JTImage, NSString;

@interface JFXImageAVSampleBufferView : UIView <JFXImageViewRendering>

@property (retain, nonatomic) JTImage *jtImage;
@property (readonly, nonatomic) long long renderingType;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) BOOL enableDebugDrawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)setRenderingType:(long long)a0;
- (void)setContentMode:(long long)a0;
- (void)updateDebugDrawing;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)JFXImageAVSampleBufferView_commonInit;
- (struct opaqueCMSampleBuffer { } *)createCMSampleBufferFromJTImage;
- (void)drawSampleBufferToLayer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)contentModeToVideoGravity:(long long)a0;

@end
