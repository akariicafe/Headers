@class NSArray, RTXPCActivityManager, RTDarwinNotificationHelper, NSObject;
@protocol OS_dispatch_source;

@interface RTPurgeManager : RTService

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningDispatchSource;
@property (nonatomic) long long pressureState;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) NSArray *purgers;
@property (readonly, nonatomic) RTXPCActivityManager *xpcActivityManager;

+ (id)purgeTypeToString:(long long)a0;
+ (id)earliestAllowedRawLocationDateWithReferenceDate:(id)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)handleLanguageChangeNotification;
- (void)_handleLanguageChangeNotification;
- (id)initWithDefaultsManager:(id)a0 platform:(id)a1 purgers:(id)a2 xpcActivityManager:(id)a3;
- (void)purge:(id /* block */)a0;
- (void)_unregisterForMemoryPressureWarnings;
- (void).cxx_destruct;
- (id)init;
- (void)_purge:(id /* block */)a0;
- (void)_purgeWithType:(long long)a0 referenceDate:(id)a1 handler:(id /* block */)a2;
- (void)onCoreLocationPrivacyReset;
- (void)_registerForMemoryPressureWarnings;
- (void)dealloc;
- (void)clearRoutineWithHandler:(id /* block */)a0;

@end
