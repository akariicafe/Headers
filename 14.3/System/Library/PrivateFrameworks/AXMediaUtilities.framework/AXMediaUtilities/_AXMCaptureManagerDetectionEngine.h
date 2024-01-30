@class AXMVisionEngine, NSString, AXMSceneDetectorNode, AXMImageNode, AXMCaptureManager, AXMVisionAnalysisOptions, AXMFaceDetectorNode;

@interface _AXMCaptureManagerDetectionEngine : NSObject <AXMCaptureManagerVideoFrameObserver> {
    AXMCaptureManager *_captureManager;
    AXMVisionEngine *_visionEngine;
    AXMImageNode *_imageNode;
    AXMSceneDetectorNode *_sceneDetector;
    AXMFaceDetectorNode *_faceDetector;
    AXMVisionAnalysisOptions *_analysisOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)captureManager:(id)a0 didOutputPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithCaptureManager:(id)a0 options:(id)a1;

@end
