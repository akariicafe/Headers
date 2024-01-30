@class RTPlatform, RTUserSessionMonitor, RTInvocationDispatcher;

@interface RTAuthorizationManager : RTService

@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReady) BOOL ready;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain) RTUserSessionMonitor *userSessionMonitor;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;

- (void)_shutdown;
- (void)setup;
- (void)_setup;
- (id)init;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)a0;
- (BOOL)shouldPersistLocations;
- (void).cxx_destruct;
- (void)dealloc;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)setRoutineEnabled:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)onUserSessionChangeNotification:(id)a0;
- (BOOL)isLocationServicesEnabled;
- (id)initWithPlatform:(id)a0 userSessionMonitor:(id)a1;
- (BOOL)isCoreRoutineLocationClientEnabled;
- (void)fetchRoutineSupportedWithHandler:(id /* block */)a0;
- (void)updateRoutineEnabled:(BOOL)a0;
- (void)handleAppResetChangeNotification;

@end
