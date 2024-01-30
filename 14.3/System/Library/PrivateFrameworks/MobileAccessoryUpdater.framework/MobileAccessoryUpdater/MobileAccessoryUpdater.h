@class NSString, NSObject;
@protocol FudConnection, OS_dispatch_queue_attr, OS_dispatch_queue, MobileAccessoryUpdaterDelegate;

@interface MobileAccessoryUpdater : NSObject {
    id<MobileAccessoryUpdaterDelegate> _delegate;
    id<FudConnection> _connection;
    NSString *_bundleIdentifier;
    NSString *_clientIdentifier;
    char *_cClientIdentifier;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue_attr> *_attr;
    NSString *_activeFilter;
    BOOL _isInternalClient;
    BOOL _didUnregister;
}

- (void)createConnection;
- (void)unregister;
- (id)initWithPluginIdentifier:(id)a0 delegate:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)setLastRemoteFindDate:(id)a0;
- (id)initWithPluginIdentifier:(id)a0 isGroupIdentifier:(BOOL)a1 delegate:(id)a2 isInternalClient:(BOOL)a3 options:(id)a4 error:(id *)a5;
- (id)clientIdentifier;
- (void)dealloc;
- (id)getActiveDeviceClass;
- (BOOL)doesOperationCodeRequireFilter:(int)a0;
- (id)getPluginsList;
- (void)performNextStepWithOptions:(id)a0;
- (BOOL)loadPluginWithAccessoryInfo:(id)a0 options:(id)a1;
- (BOOL)sendMessageForCommand:(int)a0 withOptions:(id)a1 requiresFilter:(BOOL)a2;
- (void)performStep:(id)a0 withOptions:(id)a1;
- (id)activeFilter;
- (id)initWithDelegate:(id)a0 isInternalClient:(BOOL)a1 options:(id)a2 error:(id *)a3;
- (id)bundleIdentifier;
- (const char *)getActiveDeviceClassCString;
- (BOOL)sendMessageForCommand:(int)a0 withOptions:(id)a1 requiresFilter:(BOOL)a2 replyHandler:(id /* block */)a3;
- (void)handleInboundEvent:(id)a0;
- (int)getOperationCodeFromName:(id)a0;
- (id)initWithGroupIdentifer:(id)a0 delegate:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)setActiveDeviceClass:(id)a0;
- (id)queryNextStep:(id *)a0;
- (BOOL)registerForIdentifier:(id)a0 isGroupIdentifier:(BOOL)a1;
- (void)doneWithOptions:(id)a0;

@end
