@class HDPluginManager, NSString, HDBackgroundTaskScheduler, HDPrimaryProfile, HDMockPrimaryProfile, _HKBehavior;
@protocol HDNanoAlertSuppressionService;

@interface HDMockDaemon : NSObject <HDHealthDaemon>

@property (readonly, nonatomic) HDMockPrimaryProfile *mockPrimaryProfile;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) HDPluginManager *pluginManager;
@property (readonly, nonatomic) HDPrimaryProfile *primaryProfile;
@property (retain, nonatomic) id<HDNanoAlertSuppressionService> alertSuppressionService;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)daemonExtensionWithIdentifier:(id)a0;
- (void)registerForDaemonReady:(id)a0;
- (void)registerForLaunchNotification:(const char *)a0;
- (void)unregisterForLaunchNotification:(const char *)a0;
- (void)registerDaemonReadyObserver:(id)a0 queue:(id)a1;
- (id)daemonExtensionsConformingToProtocol:(id)a0;
- (void)registerDaemonActivatedObserver:(id)a0 queue:(id)a1;

@end
