@class UNUserNotificationCenter, NSString, HDProfile, NSHashTable, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface HDNotificationManager : NSObject <HDDiagnosticObject> {
    HDProfile *_profile;
    UNUserNotificationCenter *_userNotificationCenter;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSDate *_lastNotificationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)removeNotificationObserver:(id)a0;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)_aggregateBadge;
- (void).cxx_destruct;
- (id)_badgeForDomain:(long long)a0 error:(out id *)a1;
- (void)dealloc;
- (void)registerWithUserNotificationCenter;
- (void)postCompanionUserNotificationOfType:(long long)a0 completion:(id /* block */)a1;
- (void)badgeForDomain:(long long)a0 completion:(id /* block */)a1;
- (void)_postBadgesDidUpdateNotification;
- (id)diagnosticDescription;
- (id)_resourceQueue_badgeForDomain:(long long)a0;
- (id)_resourceQueue_badgeForDomain:(long long)a0 error:(out id *)a1;
- (void)_resourceQueue_notifyObserversWithNotification:(id)a0;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)_resourceQueue_updateApplicationBadge;
- (void)addNotificationObserver:(id)a0;
- (id)_resourceQueue_coaleseDomainBadges;
- (void)_resourceQueue_notifyObserversWithBadge:(id)a0 domain:(long long)a1;
- (void)setBadge:(id)a0 forDomain:(long long)a1 completion:(id /* block */)a2;
- (void)_postNotificationWithTitle:(id)a0 body:(id)a1 categoryIdentifier:(id)a2 subtitle:(id)a3 domain:(long long)a4 url:(id)a5 accessoryImageName:(id)a6 header:(id)a7 completion:(id /* block */)a8;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1 categoryIdentifier:(id)a2 subtitle:(id)a3 domain:(long long)a4 accessoryImageName:(id)a5 header:(id)a6 completion:(id /* block */)a7;
- (BOOL)incrementBadgeForDomain:(long long)a0 count:(long long)a1 error:(out id *)a2;
- (BOOL)_resourceQueue_setBadge:(id)a0 domain:(long long)a1 error:(out id *)a2;
- (void)postNotificationWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 completion:(id /* block */)a3;
- (void)postNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_sendCompanionUserNotificationResponse:(id /* block */)a0 error:(id)a1;
- (void)receivedCompanionUserNotificationRequest:(id)a0 completion:(id /* block */)a1;

@end
