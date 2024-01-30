@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject

@property (readonly, nonatomic) NSMutableSet *_disabledReasons;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_avscAccessQueue;
@property (nonatomic, getter=isCallActive) BOOL callActive;

- (void)_handleApplicationDidEnterBackground:(id)a0;
- (void)_handleApplicationWillEnterForeground:(id)a0;
- (id)initWithInitialDisabledReasons:(id)a0;
- (void)_handleCallIsActiveDidChangeNotification:(id)a0;
- (void)addDisabledReason:(long long)a0;
- (void)_registerForAVSystemControllerNotificationsAndQueryState;
- (void)removeDisabledReason:(long long)a0;
- (id)_descriptionForReasons:(id)a0;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)a0;
- (id)initDisabledForLaunch;
- (void)_setCallActive:(BOOL)a0;
- (void)_accessQueue_subscribeToAVSystemControllerNotificationsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_handleServerConnectionDiedNotification:(id)a0;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)dealloc;
- (int)_processIdentifer;
- (id)_descriptionStringForReason:(long long)a0;
- (void)_handleRecordingStateDidChangeNotification:(id)a0;

@end
