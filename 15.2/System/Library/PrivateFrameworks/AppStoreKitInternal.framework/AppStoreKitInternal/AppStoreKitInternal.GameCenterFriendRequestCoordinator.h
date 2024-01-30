@interface AppStoreKitInternal.GameCenterFriendRequestCoordinator : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ onFriendRequestCountDidUpdate;
    void /* unknown type, empty encoding */ currentFriendRequestCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)dealloc;
- (void)accountsDidChangeWithNotification:(id)a0;

@end
