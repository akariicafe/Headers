@class NSString, NSMutableDictionary;

@interface AXAuditScreenshotManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_image;
@property (retain, nonatomic) NSMutableDictionary *_rotation;
@property (retain, nonatomic) NSMutableDictionary *_displayBounds;
@property (retain, nonatomic) NSMutableDictionary *_borderFrame;
@property (retain, nonatomic) NSMutableDictionary *_scaleFactor;
@property (retain, nonatomic) NSMutableDictionary *_shouldFlipOutline;
@property (retain, nonatomic) NSString *lastTimestamp;

+ (id)sharedManager;
+ (id)imageFromRemoteImageData:(id)a0 rotation:(double)a1;
+ (id)imageProcessingQueue;

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)screenshotForIssue:(id)a0 elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (double)screenshotRotationForTimestamp:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerImageSize:(struct CGSize { double x0; double x1; })a1 timestamp:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_elementBoundsForIssue:(id)a0 containerImageSize:(struct CGSize { double x0; double x1; })a1;
- (void)addScreenshot:(id)a0 forTimestamp:(id)a1;
- (void)addScreenshotWithInfo:(id)a0 timestamp:(id)a1 completion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })elementBoundsInScreenShotForIssue:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenshotBorderFrameForTimestamp:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenshotDisplayBoundsForTimestamp:(id)a0;
- (id)screenshotHighlightingIssue:(id)a0;
- (id)screenshotImageForTimestamp:(id)a0;
- (id)screenshotImageForTimestamp:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)screenshotScaleFactorForTimestamp:(id)a0;
- (BOOL)screenshotShouldFlipOutlineForTimestamp:(id)a0;
- (void)setScreenshotBorderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTimestamp:(id)a1;
- (void)setScreenshotDisplayBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTimestamp:(id)a1;
- (void)setScreenshotRotation:(double)a0 forTimestamp:(id)a1;
- (void)setScreenshotScaleFactor:(double)a0 forTimestamp:(id)a1;
- (void)setScreenshotShouldFlipOutline:(BOOL)a0 forTimestamp:(id)a1;
- (id)thumbnailImageOfIssue:(id)a0;

@end
