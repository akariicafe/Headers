@class NSUserDefaults, NSString, NSOperationQueue, CMMotionActivityManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMMediaSession : NSObject <CMDistributedSensingDelegate> {
    struct unique_ptr<CMHeadTrackingService, std::default_delete<CMHeadTrackingService>> { struct __compressed_pair<CMHeadTrackingService *, std::default_delete<CMHeadTrackingService>> { struct CMHeadTrackingService *__value_; } __ptr_; } _headTrackingService;
    struct Dispatcher { void /* function */ **x0; id x1; } *_deviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_accessoryDeviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_accessoryDeviceMotionConfigDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_accessoryDeviceMotionInEarStatusDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id /* block */ _clientHandler;
    BOOL _started;
    int _clientMode;
    unsigned long long _predictionIntervalMicroseconds;
    int _scheme;
    struct CMOQuaternion { float elements[4]; } _q_bf;
    BOOL _disable2IMU;
    double _lidAngle;
    struct UnTimesyncedAuxSampleHelper { unsigned int totalUnsyncedSamples; unsigned int totalUnsyncedOutlierSamples; double auxAndSrcSensorTimeOffset; struct CMFixedSizeQueue<double, 10> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[8]; struct CMQueueStorage<double, 10> { char buffer[72]; } fStorage; } auxAndSrcSensorTimeOffsetBuffer; } _unsyncedAuxHelper;
    struct unique_ptr<CMMediaSessionAnalyticsTracker, std::default_delete<CMMediaSessionAnalyticsTracker>> { struct __compressed_pair<CMMediaSessionAnalyticsTracker *, std::default_delete<CMMediaSessionAnalyticsTracker>> { struct CMMediaSessionAnalyticsTracker *__value_; } __ptr_; } _analyticsTracker;
    int _previousBTZState;
    double _lastInBTZTime;
    int _previousMotionActivityType;
    double _lastAccessoryDMTime;
    int _previousTracking1IMU;
    BOOL _previousCTState;
    BOOL _previousCTBodyTurnState;
    BOOL _previousHeadTurnState;
    double _lastExitCTTime;
    float _lastAngleBetweenCurrentBoresightToDefault;
    BOOL _previousTrackingEnabled;
    double _lastDistractedViewingStartTime;
    double _lastDistractedViewingEndTime;
    BOOL _previousSrcMoving;
    BOOL _previousAuxMoving;
    BOOL _previousSteadyStatePedestrian;
    BOOL _previousKeepBoresightCentered;
    int _lastTrackingDisableRoute;
    struct AudioAccessorySample { struct { struct CMOQuaternion { float elements[4]; } quaternion; struct CMVector<float, 3> { float elements[3]; } rotationRate; struct CMVector<float, 3> { float elements[3]; } biasCovariance; struct CMVector<float, 3> { float elements[3]; } userAcceleration; struct Status { unsigned short bits; } status; } auxDM; unsigned long long sensorTime; double timestamp; double arrivalTimestamp; struct CMVector<float, 3> { float elements[3]; } filteredAcceleration; float quiescentNoise; int quiescentMode; unsigned int sequenceNumber; int sensorLocation; int timeSyncStatus; unsigned long long btcTimestamp; double sampleLatency; } _lastAudioAccessorySample;
    unsigned long long _lastAccessoryTimestamp;
    unsigned long long _lastSourceTimestampMicroSeconds;
    unsigned long long _lastStateTimestamp;
    BOOL _trackingEstimatesStagnated;
    BOOL _logForReplay;
    double _printPoseTimer;
    BOOL _enableJBLThreshold;
    BOOL _verboseLogging;
    double _accessorySampleTimer;
    int _accessorySamplesPerSecond;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_activityQueue;
    struct unique_ptr<CLSettings, std::default_delete<CLSettings>> { struct __compressed_pair<CLSettings *, std::default_delete<CLSettings>> { struct CLSettings *__value_; } __ptr_; } _motionSettings;
    NSUserDefaults *_motionDefaults;
    double _minQuiescentPeriodForBTZ;
    int _notify50HzPoseDecimator;
    double _sessionStartTime;
    double _firstAccessoryDMTime;
    double _firstValidPoseTime;
    double _lastTimesyncLostTime;
    struct unique_ptr<CMSpatialLogger, std::default_delete<CMSpatialLogger>> { struct __compressed_pair<CMSpatialLogger *, std::default_delete<CMSpatialLogger>> { struct CMSpatialLogger *__value_; } __ptr_; } _logger;
    int _inEarStatus;
    BOOL _inEarStatusGatingEnabled;
    int _jitterBufferLevelNotificationToken;
    NSObject<OS_dispatch_source> *_jitterBufferLevelInitialUpdateTimer;
    unsigned short _jitterBufferLevel;
    unsigned short _jitterBufferLevelThreshold;
    BOOL _sitStandDetectorEnabled;
    BOOL _userSettingFwdPredictorEnabled;
}

@property unsigned int totalSourceIMUSamples;
@property unsigned int totalAccessoryIMUSamples;
@property unsigned int totalFacePoseAnchorSamples;
@property unsigned int accessoryIMUSampleRate;
@property float prevAmbienceBedRoll;
@property BOOL overrideDefaultHeadsetOrientation;
@property struct CMOQuaternion { float elements[4]; } headsetOrientationOverride;
@property BOOL returnDefaultPose;
@property BOOL returnRandomPose;
@property BOOL alwaysNotify50HzPose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAvailable;

- (void)_reset;
- (id)_initWithOptions:(id)a0;
- (BOOL)_start;
- (void)_stop;
- (void).cxx_destruct;
- (id)init;
- (void)_updateUserSettings;
- (void)_disableLoggingForReplay;
- (void)_startDefaultsPreferenceUpdater;
- (void)_startHeadTracking;
- (void)_notifyClientHandler;
- (void)_startJitterBufferLevelMonitor;
- (void)_stopJitterBufferLevelMonitor;
- (void)_stopHeadTracking;
- (void)_stopDefaultsPreferenceUpdater;
- (void)_updateMinQuiescentPeriodForBTZ;
- (void)_updateUseFwdPredictionUserSettings;
- (void)_feedPredictorEstimates;
- (void)_startJitterBufferLevelRetryTimer;
- (void)_feedAdaptiveLatencyJitterBufferLevel;
- (void)_stopJitterBufferLevelRetryTimer;
- (int)_createPoseFromListenerOrientation:(const struct ListenerOrientation { struct CMOQuaternion { float x0[4]; } x0; unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; } *)a0 Pose:(id *)a1;
- (void)_feedPoseAnchor:(const struct Sample { double x0; struct { double x0; int x1; int x2; struct { double x0; double x1; double x2; double x3; } x3; struct { float x0; float x1; float x2; } x4; float x5; float x6; float x7; float x8; float x9; unsigned int x10; } x1; } *)a0 facePoseError:(struct { float x0; BOOL x1; BOOL x2; int x3; double x4; } *)a1;
- (void)feedPoseAnchorWithAttitude:(struct { double x0; double x1; double x2; double x3; })a0 position:(struct CMVector<float, 3> { float x0[3]; })a1 timestampUs:(unsigned long long)a2;
- (unsigned long long)_getAuxSampleTimestamp:(const void *)a0 currentTime:(double)a1;
- (void)_setFixedTransforms:(const struct CMOQuaternion { float x0[4]; } *)a0;
- (void)_enableLoggingForReplayWithFilenamePrefix:(id)a0 filePath:(id)a1;
- (void)_triggerUserInteractedWithDeviceEvent;
- (BOOL)_startPoseUpdatesToQueue:(id)a0 andHandler:(id /* block */)a1;
- (void)_feedSourceDeviceIMU:(const struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (void)_feedLidAngle:(double)a0;
- (void)_feedFacePose:(id)a0 rotationMatrix:(id)a1 timestamp:(double)a2 error:(struct { float x0; BOOL x1; BOOL x2; int x3; double x4; } *)a3;
- (void)_feedAccessoryDeviceMotion:(const void *)a0;
- (void)_feedAccessoryConfig:(const void *)a0;
- (void)_feedAccessoryInEarStatus:(const int *)a0;
- (struct AudioAccessorySample { struct { struct CMOQuaternion { float x0[4]; } x0; struct CMVector<float, 3> { float x0[3]; } x1; struct CMVector<float, 3> { float x0[3]; } x2; struct CMVector<float, 3> { float x0[3]; } x3; struct Status { unsigned short x0; } x4; } x0; unsigned long long x1; double x2; double x3; struct CMVector<float, 3> { float x0[3]; } x4; float x5; int x6; unsigned int x7; int x8; int x9; unsigned long long x10; double x11; })_getLastAudioAccessorySample;
- (int)_currentAudioListenerOrientation:(id *)a0;
- (void)_setConvergenceRateForBTZ:(float)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id).cxx_construct;
- (void)_logEvent:(id)a0;

@end
