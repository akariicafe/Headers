@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject

@property (readonly, nonatomic) NSMutableSet *_disabledReasons;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_avscAccessQueue;
@property (nonatomic, getter=isCallActive) BOOL callActive;

- (void)_handleApplicationDidEnterBackground:(id)a0;
- (void)removeDisabledReason:(long long)a0;
- (void)_handleCallIsActiveDidChangeNotification:(id)a0;
- (id)initWithInitialDisabledReasons:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForAVSystemControllerNotifications;
- (void)addDisabledReason:(long long)a0;
- (id)_descriptionForReasons:(id)a0;
- (void)_handleServerConnectionDiedNotification:(id)a0;
- (void)_setCallActive:(BOOL)a0;
- (void)_enableCallStatusMonitor;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)a0;
- (void)_handleApplicationWillEnterForeground:(id)a0;
- (id)_descriptionStringForReason:(long long)a0;
- (id)initDisabledForLaunch;
- (void)_unregisterForAVSystemControllerNotifications;

@end
