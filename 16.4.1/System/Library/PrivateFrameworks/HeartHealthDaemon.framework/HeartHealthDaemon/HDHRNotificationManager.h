@class NSString, HDProfile, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDHRNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_fakingNotifyTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (id)_userNotificationCenter;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_subscribeToFakingNotifications;
- (BOOL)_queue_fakeCardioFitnessNotificationWithData:(BOOL)a0 repeat:(BOOL)a1 error:(id *)a2;
- (void)_queue_fakeNotificationWithEventType:(id)a0 withData:(BOOL)a1;
- (void)_queue_showNotificationForHeartEvent:(id)a0;
- (void)_subscribeToFakingNotification:(id)a0 type:(id)a1 withData:(BOOL)a2;
- (void)_unsubscribeToFakingNotifications;

@end
