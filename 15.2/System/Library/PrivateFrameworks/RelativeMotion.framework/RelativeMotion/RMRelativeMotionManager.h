@class RMAudioListenerPoseManager, NSDictionary, RMDummyData, RMDummyDataManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface RMRelativeMotionManager : NSObject {
    RMDummyData *_dummyDataBuffer[2];
    int _dummyDataBufferIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dummyDataBufferLock;
    int _currentDummyDataBufferIndex;
    struct { struct { double x; double y; double z; double w; } quaternion; double timestamp; long long error; double consumedAuxTimestamp; double receivedAuxTimestamp; double machAbsTimestamp; } _audioListenerPoseBuffer[2];
    long long _audioListenerPoseErrorBuffer[2];
    int _audioListenerPoseBufferIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioListenerPoseBufferLock;
    BOOL _shouldReceiveDummyData;
    BOOL _shouldReceiveAudioListenerPose;
    BOOL _verboseLatencyAnalysisLogging;
    int _currentAudioListenerPoseBufferIndex;
    NSObject<OS_dispatch_queue> *_queue;
    RMDummyDataManager *_dummyDataManager;
    NSUserDefaults *_defaults;
    RMAudioListenerPoseManager *_audioListenerPoseManager;
}

@property (retain, nonatomic) NSDictionary *audioListenerPoseOptions;

+ (BOOL)isAudioListenerPoseAvailable;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startReceivingAudioListenerPoseWithStatusCallback:(id /* block */)a0;
- (void)stopReceivingAudioListenerPose;
- (void)resetAudioListenerPoseTrackingForAllClients;
- (long long)getCurrentAudioListenerPose:(struct { double x0; double x1; double x2; double x3; } *)a0 timestamp:(double *)a1;
- (id)getCurrentAudioListenerPoseWithError:(long long *)a0;
- (void)startReceivingDummyData;
- (void)stopReceivingDummyData;
- (id)getCurrentDummyData;

@end
