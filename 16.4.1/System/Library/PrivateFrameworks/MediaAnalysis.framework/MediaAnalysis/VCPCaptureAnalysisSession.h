@class VCPVideoFullFaceDetector, NSMutableDictionary, NSDictionary, NSObject, VCPTrimAnalyzer, VCPHomeKitMotionAnalyzer, VCPLightMotionAnalyzer, VCPVideoFacePoseAnalyzer, VCPVideoFaceMeshAnalyzer, VCPSceneChangeAnalyzer, VCPAudioAnalyzer, VCPImageBlurAnalyzer, VCPFullVideoAnalyzer;
@protocol OS_dispatch_queue;

@interface VCPCaptureAnalysisSession : NSObject {
    unsigned long long _analysisTypes;
    VCPVideoFacePoseAnalyzer *_poseAnalyzer;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    VCPFullVideoAnalyzer *_videoAnalysis;
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPAudioAnalyzer *_audioAnalyzer;
    VCPVideoFullFaceDetector *_faceDetector;
    VCPSceneChangeAnalyzer *_sceneChangeAnalyzer;
    VCPLightMotionAnalyzer *_lightMotionAnalyzer;
    VCPTrimAnalyzer *_trimAnalyzer;
    VCPHomeKitMotionAnalyzer *_homeKitMotionAnalyzer;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTPixelRotationSession *x4; } *_rotator;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTPixelRotationSession *x4; } *_rotatorForFacePose;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _preferredTransform;
    float _focalLengthInPixels;
    NSMutableDictionary *_aggregatedResults;
    int _rotationAngleForFacePose;
    int _preferredAngle;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    BOOL _preWarmed;
}

@property (readonly) NSDictionary *aggregatedResults;

+ (id)analyzerForAnalysisTypes:(unsigned long long)a0 withPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 properties:(id)a2;
+ (id)aggregateAnalysisForTypes:(unsigned long long)a0 withFramesMeta:(id)a1 properties:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 properties:(id)a3 completion:(id /* block */)a4;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 properties:(id)a3 error:(id *)a4;
- (BOOL)finalizeAnalysis;
- (int)prewarmWithProperties:(id)a0;
- (int)analyzeAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)analyzeFrameWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 analysisData:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })flipTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithAnalysisTypes:(unsigned long long)a0 withPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 withFocalLengthInPixels:(float)a2 withAnalysisQueue:(id)a3 withTurbo:(BOOL)a4;
- (struct { void /* unknown type, empty encoding */ x0[4]; })rotateTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 byAngle:(int)a1;
- (BOOL)shouldCutAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 stillPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withCut:(BOOL)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForAngle:(int)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)updatePreferredTransform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 properties:(id)a1;

@end
