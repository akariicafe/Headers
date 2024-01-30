@class CMMotionManager;

@interface NTKSnowglobeMotionManager : NSObject {
    CMMotionManager *_motionManager;
    BOOL _running;
    unsigned long long _activeTokens;
}

@property (readonly) struct { double x; double y; double z; } userAcceleration;
@property (readonly) struct { double x; double y; double z; } rotationRate;

+ (id)sharedInstance;

- (id)acquireToken;
- (void)pause;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)_invalidateToken;

@end
