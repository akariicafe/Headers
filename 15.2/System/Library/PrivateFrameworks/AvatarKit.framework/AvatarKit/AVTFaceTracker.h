@class ARSession, ARConfiguration, NSPointerArray, NSURL, NSLock, AVTFaceTrackingInfo, AVDepthData;

@interface AVTFaceTracker : NSObject {
    ARSession *_arSession;
    ARConfiguration *_arConfiguration;
    NSPointerArray *_delegates;
    struct { int width; int height; } _captureDeviceFormatVideoDimensions;
    float _captureDeviceFormatVideoFieldOfView;
    NSLock *_trackingDataLock;
    struct { void /* unknown type, empty encoding */ columns[4]; } _rawTransform;
    NSURL *_debugRecordingURL;
    BOOL _trackingIsPaused;
    BOOL _isActive;
    BOOL _shouldUseAudioData;
    BOOL _wantsPersonSegmentation;
    struct { double refTimestamp; double arDelegateTimestamp; } _perfPacket;
    double _lastARFrameTime;
    long long _frame_id;
    double _timeBetweenARFrame;
    long long _interfaceOrientation;
}

@property (class, nonatomic) BOOL usesInternalTrackingPipeline;

@property (nonatomic) BOOL shouldConstrainHeadPose;
@property (nonatomic) BOOL shouldUseAudioData;
@property (nonatomic) BOOL wantsPersonSegmentation;
@property (nonatomic, getter=faceTrackingIsPaused) BOOL faceTrackingPaused;
@property (nonatomic) BOOL skipUpdates;
@property (readonly, nonatomic) BOOL faceIsTracked;
@property (readonly, nonatomic) BOOL lowLight;
@property (readonly, nonatomic, getter=isSensorCovered) BOOL sensorCovered;
@property (readonly) double lastTrackingDate;
@property (readonly) unsigned long long lastTrackingCaptureTimestamp;
@property (readonly, nonatomic) AVTFaceTrackingInfo *faceTrackingInfo;
@property (readonly, nonatomic) long long faceTrackingFrameID;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rawTransform;
@property (readonly, nonatomic) ARSession *arSession;
@property (nonatomic) BOOL directRetargetingMode;
@property (nonatomic) BOOL limitRoll;
@property (readonly, nonatomic) long long captureVideoOrientation;
@property (readonly, nonatomic) float fieldOfView;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ videoDimensions;
@property (readonly, nonatomic) float videoAspectRatio;
@property (readonly, nonatomic) AVDepthData *fallBackDepthData;
@property (readonly, nonatomic) BOOL mirroredDepthData;
@property (readonly, nonatomic) double arFrameTimestamp;
@property (readonly, nonatomic) double arDelegateTimestamp;
@property (readonly, nonatomic) double arFrameDeltaTime;
@property (copy) NSURL *faceTrackingRecordingURL;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)stopRecording;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)sessionWasInterrupted:(id)a0;
- (void)sessionInterruptionEnded:(id)a0;
- (void)session:(id)a0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)setLowLight:(BOOL)a0;
- (void)startRecording;
- (void)run;
- (BOOL)isActive;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setInterfaceOrientation:(long long)a0;
- (void)stop;
- (long long)interfaceOrientation;
- (void)decreaseFrameRate;
- (void)increaseFrameRateToMaximum;
- (void)setupARKit;
- (void)enumerateDelegates:(id /* block */)a0;
- (void)configurationVideoFormatDidChange;
- (void)_setupARKitForDebugging:(BOOL)a0;
- (void)setupARKitForDebugging;
- (void)setFaceIsTracked:(BOOL)a0;
- (void)setSensorCovered:(BOOL)a0;
- (void)updateWithARFrame:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2 deviceFormat:(id)a3 mirroredDepthData:(BOOL)a4;
- (void)updateWithARFrame:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2 videoDimensions:(struct { int x0; int x1; })a3 fieldOfView:(float)a4 mirroredDepthData:(BOOL)a5;
- (void)updateWithARFrame:(id)a0 worldAlignment:(long long)a1 fallBackDepthData:(id)a2 captureOrientation:(long long)a3 interfaceOrientation:(long long)a4 videoDimensions:(struct { int x0; int x1; })a5 fieldOfView:(float)a6 mirroredDepthData:(BOOL)a7;
- (void)discardARFrameData;
- (BOOL)faceTrackingPaused;
- (void)beginQuery;
- (void)endQuery;
- (void)copyTrackingData:(struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)a0;

@end
