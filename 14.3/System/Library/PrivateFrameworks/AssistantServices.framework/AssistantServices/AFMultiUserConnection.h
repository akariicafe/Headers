@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFMultiUserConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

- (void)getFirstNameForSharedUserId:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getHomeUserIdForSharedUserId:(id)a0 completion:(id /* block */)a1;
- (void)getPreferredMediaUserHomeUserIDWithCompletion:(id /* block */)a0;
- (void)getHomeUserIdOfRecognizedUserWithCompletion:(id /* block */)a0;
- (void)getMultiUserSettingsForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (id)_connection;
- (void)getSharedUserIdForHomeUserId:(id)a0 completion:(id /* block */)a1;
- (id)_multiUserServiceWithErrorHandler:(id /* block */)a0;
- (void)_clearConnection;
- (void)getSharedUserProfileLimitWithCompletion:(id /* block */)a0;
- (void)getConformingSharedUserIds:(id /* block */)a0;
- (void)getConformingSharedUserIdForHomeUserId:(id)a0 completion:(id /* block */)a1;

@end
