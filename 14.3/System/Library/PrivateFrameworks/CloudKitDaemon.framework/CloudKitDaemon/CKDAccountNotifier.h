@class NSOperationQueue, NSMapTable;

@interface CKDAccountNotifier : NSObject

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable *notificationHandlers;
@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue;

+ (id)sharedNotifier;

- (id)init;
- (void).cxx_destruct;
- (void)postAccountChangedNotificationToClients;
- (void)dealloc;
- (void)postAccountChangedNotificationWithAccountID:(id)a0 changeType:(long long)a1;
- (void)unregisterObserverForAccountChangeNotification:(id)a0;
- (void)registerObserver:(id)a0 forAccountChangeNotification:(id /* block */)a1;

@end
