@class PADFrame, NSTimer, NSURL, CIDVRGBCameraPreview, NSObject, CIDVRGBCaptureUIConfig;
@protocol PADClassifier, PADFrameQualityMonitor, CIDVRGBImageQualityAnalyzer, PADAuditDataRepository, CIDVRGBAVSessionManager, OS_dispatch_queue, CIDVRGBCaptureSelfieControllerDelegate;

@interface _CIDVRGBCaptureSelfieController : NSObject <CIDVRGBCaptureSelfieController, CIDVRGBAVSessionManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CIDVRGBCaptureUIConfig *_config;
    id<CIDVRGBAVSessionManager> _avSession;
    id<PADFrameQualityMonitor> _quality;
    id<CIDVRGBImageQualityAnalyzer> _lightweightQuality;
    id<PADClassifier> _classifier;
    id<PADAuditDataRepository> _audit;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    PADFrame *_selfie;
    NSURL *_videoURL;
    double _selfieStart;
    NSTimer *_livenessTimer;
    unsigned long long _stitchFramesToIgnore;
    unsigned long long _analyticStitchFramesToIgnore;
    long long _taOptions;
    long long _state;
}

@property (nonatomic) long long state;
@property (nonatomic) long long analyticsState;
@property (retain, nonatomic) CIDVRGBCameraPreview *preview;
@property (weak, nonatomic) id<CIDVRGBCaptureSelfieControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) struct PADClassifierFrameOptions { BOOL runTA; BOOL runFAC; BOOL runPRD; } frameOptions;

- (id)_viewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bootstrap;
- (id)initWithConfig:(id)a0;
- (void)cancelWithCompletion:(id /* block */)a0;
- (void)skipLivenessGesture:(BOOL)a0;
- (void)startLiveness;
- (void)beginIgnoreStitchCounter;
- (void)captureSelfieUsingFlash:(BOOL)a0;
- (void)restartSelfieCapture;
- (void)submitSelfie;
- (void)gestureCompleted;
- (BOOL)isLowDiskSpaceError:(id)a0;
- (void)resumeLivenessGesture;
- (void)beginNewGesture;
- (void)pauseLivenessGesture;
- (void)restartLiveness;
- (void)cancelWithError:(id)a0 andCompletion:(id /* block */)a1;
- (void)didCapturePhoto:(id)a0 error:(id)a1;
- (void)didCaptureFrame:(id)a0;
- (void)didCaptureVideoAtURL:(id)a0 error:(id)a1;
- (void)_updateRegionOfInterestForFrame:(id)a0;
- (void)_performDebugAnalysisForFrame:(id)a0;
- (void)_performImageQualityAnalysisForFrame:(id)a0;
- (void)_performLivenessAnalysisForFrame:(id)a0;
- (void)_performLightweightImageQualityAnalysisForFrame:(id)a0;
- (void)_startLiveness;
- (id)_selfieBufferToImage:(id)a0;
- (void)_finishLiveness;
- (void)_reorientSelfieFrame:(id)a0;
- (BOOL)_shouldPresentErrorAlertForError:(id)a0;
- (id)_compressSelfie:(id)a0 skipCompression:(BOOL)a1;
- (void)_startLivenessTimer;
- (void)_stopRecordingLivenessVideo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_reorientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContainerOfSize:(struct CGSize { double x0; double x1; })a1 fromOrientation:(unsigned int)a2;
- (id)_reorientImage:(id)a0;

@end
