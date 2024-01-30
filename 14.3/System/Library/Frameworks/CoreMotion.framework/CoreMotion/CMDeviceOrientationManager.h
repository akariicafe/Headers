@interface CMDeviceOrientationManager : NSObject {
    id _internal;
}

@property (class, readonly, nonatomic, getter=isAlwaysOn) BOOL alwaysOn;

+ (void)initialize;
+ (BOOL)isAvailable;
+ (void)dummySelector:(id)a0;

- (BOOL)orientationNotificationsDisabled;
- (id)initPrivate;
- (id)init;
- (void)updateAggregateDictionaryPrivate;
- (void)onMotionPreferencesUpdated;
- (void)dealloc;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stop;
- (void)onNotification:(id)a0;
- (void)deallocPrivate;
- (void)stopDeviceOrientationUpdatesPrivate;
- (void)setDeviceOrientationCallbackModePrivate:(int)a0;
- (id)stringForOrientation:(int)a0;
- (id)deviceOrientationBlocking;
- (void)stopDeviceOrientationUpdates;
- (BOOL)isDeviceOrientationAvailable;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)start;
- (void)onDeviceOrientation:(const struct Sample { double x0; int x1; } *)a0;
- (void)startDeviceOrientationUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)isDeviceOrientationActive;

@end
