@interface CMDeviceOrientationManager : NSObject {
    id _internal;
}

@property (class, readonly, nonatomic, getter=isAlwaysOn) BOOL alwaysOn;

+ (void)initialize;
+ (BOOL)isAvailable;
+ (void)dummySelector:(id)a0;

- (void)setDeviceOrientationCallbackModePrivate:(int)a0;
- (void)onMotionPreferencesUpdated;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)onNotification:(id)a0;
- (BOOL)isDeviceOrientationActive;
- (void)stopDeviceOrientationUpdatesPrivate;
- (BOOL)orientationNotificationsDisabled;
- (void)startDeviceOrientationUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)isDeviceOrientationAvailable;
- (id)initPrivate;
- (void)dealloc;
- (void)updateAggregateDictionaryPrivate;
- (void)deallocPrivate;
- (void)stop;
- (id)init;
- (void)start;
- (void)stopDeviceOrientationUpdates;
- (id)deviceOrientationBlocking;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)onDeviceOrientation:(const struct Sample { double x0; int x1; } *)a0;
- (id)stringForOrientation:(int)a0;

@end
