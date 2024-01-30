@interface CMDeviceOrientationManager : NSObject {
    id _internal;
}

@property (class, readonly, nonatomic, getter=isAlwaysOn) BOOL alwaysOn;

+ (void)initialize;
+ (void)dummySelector:(id)a0;
+ (BOOL)isAvailable;

- (void)onDeviceOrientation:(const struct Sample { double x0; int x1; } *)a0;
- (BOOL)isDeviceOrientationAvailable;
- (BOOL)orientationNotificationsDisabled;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)setDeviceOrientationCallbackModePrivate:(int)a0;
- (void)updateAggregateDictionaryPrivate;
- (BOOL)isDeviceOrientationActive;
- (void)onNotification:(id)a0;
- (void)start;
- (id)initPrivate;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceOrientationUpdates;
- (void)onMotionPreferencesUpdated;
- (void)startDeviceOrientationUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (void)stopDeviceOrientationUpdatesPrivate;
- (void)deallocPrivate;
- (id)deviceOrientationBlocking;
- (void)dealloc;
- (void)stop;
- (id)stringForOrientation:(int)a0;

@end
