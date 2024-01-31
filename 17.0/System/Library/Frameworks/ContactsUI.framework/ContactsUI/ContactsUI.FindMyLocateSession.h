@class NSError;

@interface ContactsUI.FindMyLocateSession : NSObject {
    void /* unknown type, empty encoding */ friendshipUpdateCallback;
    void /* unknown type, empty encoding */ _session;
    void /* unknown type, empty encoding */ isInitialized;
    void /* unknown type, empty encoding */ initContinuations;
    void /* unknown type, empty encoding */ friendsUpdateTask;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, copy) id /* block */ friendshipUpdateCallback;

+ (BOOL)hasCorrectPermissionsForLocationSharing;

- (id)init;
- (void).cxx_destruct;
- (long long)friendshipState:(id)a0;
- (void)getAllFriendIdsWithCompletion:(id /* block */)a0;
- (void)sendFriendshipOfferTo:(id)a0 end:(long long)a1 isFromGroup:(BOOL)a2 completion:(id /* block */)a3;
- (void)startUpdatingFriendsWithInitialUpdates:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;
- (void)stopSharingLocationWith:(id)a0 isFromGroup:(BOOL)a1 completion:(id /* block */)a2;
- (void)stopUpdatingFriendsWithCompletionHandler:(void (^)(NSError *))a0;

@end
