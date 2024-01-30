@class NSObject, WLKSubscriptionData, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKSubscriptionStore : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
    WLKSubscriptionData *_subscriptionData;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_connection;
- (void).cxx_destruct;
- (void)refreshSubscriptionDataIfNeeded;
- (BOOL)_isSubscriptionSyncInProgress;
- (void)_setIsSubscriptionSyncInProgress:(BOOL)a0;
- (id)cachedSubscriptionData;
- (void)fetchSubscriptionData:(BOOL)a0 completion:(id /* block */)a1;

@end
