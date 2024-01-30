@class SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSSoftwareUpdatesStore : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    SSXPCConnection *_connection;
    BOOL _didMigration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    void *_mobileCoreServices;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(id /* block */)a0;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;

@end
