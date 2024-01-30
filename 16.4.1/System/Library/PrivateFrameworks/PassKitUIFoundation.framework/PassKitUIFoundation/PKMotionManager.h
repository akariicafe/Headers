@class NSHashTable, CMMotionManager, CMDeviceMotion;

@interface PKMotionManager : NSObject {
    CMMotionManager *_motionManager;
    NSHashTable *_clients;
}

@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic) CMDeviceMotion *motion;

+ (id)sharedManager;

- (id)_init;
- (void)registerClient:(id)a0;
- (void)unregisterClient:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithMotion:(id)a0;

@end
