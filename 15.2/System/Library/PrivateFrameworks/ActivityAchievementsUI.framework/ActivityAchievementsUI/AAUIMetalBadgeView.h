@class CAMetalLayer, AAUIBadgeModelConfiguration, UIImage, UIView, NSString, AAUIMetalBadgeRenderer;
@protocol AAUIBadgeViewDrawableDelegate;

@interface AAUIMetalBadgeView : UIView <AAUIBadgeViewDrawable> {
    BOOL _useEarnedShader;
}

@property (weak, nonatomic) id<AAUIBadgeViewDrawableDelegate> delegate;
@property (retain, nonatomic) CAMetalLayer *metalLayer;
@property (retain, nonatomic) AAUIMetalBadgeRenderer *renderer;
@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) AAUIBadgeModelConfiguration *configuration;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) UIImage *backTextureImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshot;
- (void).cxx_destruct;
- (void)resizeBadgeForCurrentViewSize;
- (void)cleanupAfterSnapshot;
- (id)initUsingEarnedShader:(BOOL)a0 delegate:(id)a1;

@end
