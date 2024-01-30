@class BWPixelBufferPool, FigM2MController;

@interface BWVisionLandmarkDetector : NSObject {
    BWPixelBufferPool *_faceDetectionBufferPool;
    FigM2MController *_m2mController;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)_detectLandmarksUsingInputPixelBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 outputFaceDetectionOrientation:(int *)a2 includePoseAndQuality:(BOOL)a3;
- (int)prepareForDetectionWithInputVideoFormat:(id)a0;
- (int)detectFaceLandmarksUsingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachingToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 includePoseAndQuality:(BOOL)a2;
- (void)prewarmForDetection;

@end
