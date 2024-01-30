@class JFXPixelBufferPool;

@interface JFXPixelRotationSession : NSObject {
    struct OpaqueVTImageRotationSession { } *_imageRotationSession;
}

@property (retain, nonatomic) JFXPixelBufferPool *pixelBufferPool;
@property (readonly, nonatomic) int rotationCardinalAngle;
@property (readonly, nonatomic) BOOL mirror;

+ (void)applyDeviceRotationCorrectionWithSession:(inout id *)a0 toFrameSet:(inout id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRotation:(int)a0 mirror:(BOOL)a1;
- (struct __CVBuffer { } *)createRotatedPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)createRotatedFrameSet:(id)a0;
- (void)JT_releaseImageRotationSession;

@end
