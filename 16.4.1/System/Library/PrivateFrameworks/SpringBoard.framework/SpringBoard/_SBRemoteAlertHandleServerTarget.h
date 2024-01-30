@class BSServiceConnection;
@protocol SBSRemoteAlertHandleServiceServerInterface;

@interface _SBRemoteAlertHandleServerTarget : NSObject <SBSRemoteAlertHandleServiceServerInterface>

@property (class, readonly) _SBRemoteAlertHandleServerTarget *currentTarget;

@property (readonly, weak, nonatomic) BSServiceConnection *connection;
@property (weak, nonatomic) id<SBSRemoteAlertHandleServiceServerInterface> proxyInterface;

- (void)_performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (oneway void)activateRemoteAlertHandleWithID:(id)a0 activationContext:(id)a1;
- (id)createRemoteAlertHandleContextWithDefinition:(id)a0 configurationContext:(id)a1;
- (oneway void)invalidateRemoteAlertHandleWithID:(id)a0;
- (id)remoteAlertHandleContextsForDefinition:(id)a0 allowsCreationValue:(id)a1 configurationContext:(id)a2;
- (id)initWithConnection:(id)a0 proxyInterface:(id)a1;

@end
