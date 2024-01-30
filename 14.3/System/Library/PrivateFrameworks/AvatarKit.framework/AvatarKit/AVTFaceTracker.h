@class ARSession, ARConfiguration, NSLock, NSURL, ARFrame, AVTFaceTrackingInfo, NSMutableArray;

@interface AVTFaceTracker : NSObject {
    ARSession *_arSession;
    ARConfiguration *_arConfiguration;
    NSMutableArray *_delegates;
    struct { double timestamp; void /* unknown type, empty encoding */ translation; void /* unknown type, empty encoding */ orientation; BOOL cameraSpace; float blendShapeWeights_smooth[51]; float blendShapeWeights_raw[51]; float parameters_smooth[1]; float parameters_raw[1]; } _trackingData;
    NSLock *_trackingDataLock;
    struct { void /* unknown type, empty encoding */ columns[4]; } _rawTransform;
    NSURL *_debugRecordingURL;
    BOOL _trackingIsPaused;
    BOOL _isActive;
    BOOL _shouldUseAudioData;
    struct { double refTimestamp; double arDelegateTimestamp; } _perfPacket;
    double _lastARFrameTime;
    long long _frame_id;
    double _timeBetweenARFrame;
    long long _orientation;
}

@property (class, nonatomic) BOOL usesInternalTrackingPipeline;

@property (nonatomic) BOOL shouldConstraintHeadPose;
@property (nonatomic) BOOL shouldUseAudioData;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=faceTrackingIsPaused) BOOL faceTrackingPaused;
@property (nonatomic) BOOL skipUpdates;
@property (readonly) BOOL faceIsTracked;
@property (readonly) BOOL lowLight;
@property (readonly, getter=isSensorCovered) BOOL sensorCovered;
@property (readonly) double lastTrackingDate;
@property (readonly) unsigned long long lastTrackingCaptureTimestamp;
@property (readonly) AVTFaceTrackingInfo *faceTrackingInfo;
@property (readonly) long long faceTrackingFrameID;
@property (readonly) struct { void /* unknown type, empty encoding */ x0[4]; } rawTransform;
@property (readonly) ARSession *arSession;
@property (readonly) ARFrame *currentARFrame;
@property (nonatomic) BOOL directRetargetingMode;
@property (nonatomic) BOOL limitRoll;
@property (readonly) float fieldOfView;
@property (readonly) void /* unknown type, empty encoding */ videoDimensions;
@property (readonly) float videoAspectRatio;
@property (readonly, nonatomic) double arFrameTimestamp;
@property (readonly, nonatomic) double arDelegateTimestamp;
@property (readonly, nonatomic) double arFrameDeltaTime;
@property (copy) NSURL *faceTrackingRecordingURL;

- (void)removeDelegate:(id)a0;
- (void)stopRecording;
- (void)startRecording;
- (void)run;
- (void)addDelegate:(id)a0;
- (void)setLowLight:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)sessionWasInterrupted:(id)a0;
- (void)sessionInterruptionEnded:(id)a0;
- (void)session:(id)a0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)stop;
- (BOOL)isActive;
- (void)decreaseFrameRate;
- (void)increaseFrameRateToMaximum;
- (void)setupARKit;
- (void)_setupARKitForDebugging:(BOOL)a0;
- (void)setupARKitForDebugging;
- (void)setFaceIsTracked:(BOOL)a0;
- (void)enumerateDelegates:(id /* block */)a0;
- (void)setSensorCovered:(BOOL)a0;
- (BOOL)faceTrackingPaused;
- (void)beginQuery;
- (void)endQuery;
- (void)copyTrackingData:(struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)a0;

@end
