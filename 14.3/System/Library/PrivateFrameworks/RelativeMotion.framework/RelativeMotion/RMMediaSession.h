@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject

@property (retain, nonatomic) RMRelativeMotionManager *manager;
@property BOOL sessionStartedWithTracking;

+ (BOOL)isAvailable;

- (void)_stop;
- (BOOL)_start;
- (id)_initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)_currentAudioListenerPose:(struct { double x0; double x1; double x2; double x3; } *)a0 timestamp:(double *)a1;
- (void)_resetTrackingForAllClients;
- (void)_spatialAudioLockToDeviceChanged;
- (long long)_currentAudioListenerPose:(id *)a0;

@end
