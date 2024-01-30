@class NSHashTable, ASKStorefrontChangeProvider;

@interface ASKRebootstrapCoordinator : NSObject

@property (class, readonly) ASKRebootstrapCoordinator *sharedCoordinator;

@property (readonly, nonatomic) ASKStorefrontChangeProvider *changeObserver;
@property (readonly, nonatomic) NSHashTable *handlerTokens;
@property (copy, nonatomic) id /* block */ appBootstrapHandler;
@property (nonatomic) long long delayCount;
@property (nonatomic) BOOL hasPendingNotification;

- (void)notify;
- (void)endDelayingNotifications;
- (id)init;
- (void).cxx_destruct;
- (id)registerCleanupHandler:(id /* block */)a0;
- (void)beginDelayingNotifications;
- (void)simulateStorefrontChange;
- (void)scheduleNotification;
- (void)registerAppBootstrapHandler:(id /* block */)a0;

@end
