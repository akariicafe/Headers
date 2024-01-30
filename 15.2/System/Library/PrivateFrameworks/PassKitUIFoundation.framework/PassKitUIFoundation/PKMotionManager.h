@class NSHashTable, CMMotionManager, CMDeviceMotion;

@interface PKMotionManager : NSObject {
    CMMotionManager *_motionManager;
    NSHashTable *_clients;
}

@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic) CMDeviceMotion *motion;

+ (id)sharedManager;

- (void)unregisterClient:(id)a0;
- (void)registerClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)updateWithMotion:(id)a0;

@end
