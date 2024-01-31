@class NSString, NSXPCConnection, NSURL, NSSet, NSObject;
@protocol OS_dispatch_queue, CXCallControllerVendorProtocol, CXCallControllerHostConnectionDelegate;

@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL hasPushToTalkBackgroundMode;
@property (nonatomic) BOOL hasVoIPBackgroundMode;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) id<CXCallControllerVendorProtocol> remoteObjectProxy;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL entitledForPublicAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL entitledForPrivateAPI;
@property (readonly, nonatomic, getter=isCallTransactionRequestPermitted) BOOL callTransactionRequestPermitted;
@property (readonly, nonatomic, getter=isChannelTransactionRequestPermitted) BOOL channelTransactionRequestPermitted;
@property (weak, nonatomic) id<CXCallControllerHostConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)addOrUpdateCall:(id)a0;
- (void).cxx_destruct;
- (oneway void)removeCall:(id)a0;
- (id)initWithConnection:(id)a0 serialQueue:(id)a1;
- (oneway void)requestCalls:(id /* block */)a0;
- (oneway void)requestTransaction:(id)a0 reply:(id /* block */)a1;

@end
