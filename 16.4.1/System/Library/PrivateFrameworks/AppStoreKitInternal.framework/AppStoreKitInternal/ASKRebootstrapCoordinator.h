@class NSHashTable, ASKStorefrontChangeProvider;

@interface ASKRebootstrapCoordinator : NSObject

@property (class, readonly) ASKRebootstrapCoordinator *sharedCoordinator;

@property (readonly, nonatomic) ASKStorefrontChangeProvider *changeObserver;
@property (readonly, nonatomic) NSHashTable *handlerTokens;
@property (copy, nonatomic) id /* block */ appBootstrapHandler;
@property (nonatomic) long long delayCount;
@property (nonatomic) BOOL hasPendingNotification;

- (void)scheduleNotification;
- (void)endDelayingNotifications;
- (id)registerCleanupHandler:(id /* block */)a0;
- (void)notify;
- (void)registerAppBootstrapHandler:(id /* block */)a0;
- (void)beginDelayingNotifications;
- (id)init;
- (void)simulateStorefrontChange;
- (void).cxx_destruct;

@end
