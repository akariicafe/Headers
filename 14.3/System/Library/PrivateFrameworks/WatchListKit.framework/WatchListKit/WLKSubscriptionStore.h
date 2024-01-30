@class NSObject, WLKSubscriptionData, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKSubscriptionStore : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
    WLKSubscriptionData *_subscriptionData;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_connection;
- (id)cachedSubscriptionData;
- (void)fetchSubscriptionData:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setIsSubscriptionSyncInProgress:(BOOL)a0;
- (BOOL)_isSubscriptionSyncInProgress;
- (void)refreshSubscriptionDataIfNeeded;

@end
