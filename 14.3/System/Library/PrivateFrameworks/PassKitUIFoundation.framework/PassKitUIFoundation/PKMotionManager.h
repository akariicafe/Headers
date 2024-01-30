@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {
    CMMotionManager *_motion;
    NSHashTable *_clients;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerClient:(id)a0;
- (void)unregisterClient:(id)a0;
- (BOOL)isClientRegistered:(id)a0;
- (void)updateWithMotion:(id)a0;

@end
