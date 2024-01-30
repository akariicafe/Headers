@class PVTaskToken, JFXCapturePreviewFrameStats;

@interface JFXMattingPerfState : NSObject

@property (readonly, nonatomic) JFXCapturePreviewFrameStats *captureFrameStats;
@property (readonly, nonatomic) PVTaskToken *signpostToken;

+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;

- (void).cxx_destruct;
- (id)initWithStats:(id)a0 signpostToken:(id)a1;

@end
