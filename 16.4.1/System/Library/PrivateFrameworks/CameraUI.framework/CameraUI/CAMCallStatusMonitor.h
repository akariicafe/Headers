@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject

@property (readonly, nonatomic) NSMutableSet *_disabledReasons;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_avscAccessQueue;
@property (nonatomic, getter=isCallActive) BOOL callActive;

- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)_handleApplicationDidEnterBackground:(id)a0;
- (void)_handleCallIsActiveDidChangeNotification:(id)a0;
- (void)_accessQueue_subscribeToAVSystemControllerNotificationsWithCompletion:(id /* block */)a0;
- (void)removeDisabledReason:(long long)a0;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)addDisabledReason:(long long)a0;
- (id)initWithInitialDisabledReasons:(id)a0;
- (id)_descriptionForReasons:(id)a0;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)a0;
- (void)_asyncQueryCallActiveStatusForReason:(id)a0;
- (void)dealloc;
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)a0;
- (void)_registerForAVSystemControllerNotificationsAndQueryState;
- (void)_handleRecordingStateDidChangeNotification:(id)a0;
- (int)_processIdentifer;
- (id)init;
- (id)initDisabledForLaunch;
- (void)_handleServerConnectionDiedNotification:(id)a0;
- (id)_descriptionStringForReason:(long long)a0;
- (void).cxx_destruct;
- (void)_setCallActive:(BOOL)a0;

@end
