@class NSObject, WLKSubscriptionData, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKSubscriptionStore : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
    WLKSubscriptionData *_subscriptionData;
}

+ (id)sharedInstance;

- (id)_connection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)fetchSubscriptionData:(BOOL)a0 completion:(id /* block */)a1;
- (id)cachedSubscriptionData;
- (void)refreshSubscriptionDataIfNeeded;
- (void)_setIsSubscriptionSyncInProgress:(BOOL)a0;
- (BOOL)_isSubscriptionSyncInProgress;

@end
