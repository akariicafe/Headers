@class NSString, NSXPCConnection, NSURL, NSSet, NSObject;
@protocol OS_dispatch_queue, CXCallControllerVendorProtocol, CXCallControllerHostConnectionDelegate;

@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL hasVoIPBackgroundMode;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) id<CXCallControllerVendorProtocol> remoteObjectProxy;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL entitledForPublicAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL entitledForPrivateAPI;
@property (weak, nonatomic) id<CXCallControllerHostConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)addOrUpdateCall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (oneway void)removeCall:(id)a0;
- (oneway void)requestTransaction:(id)a0 reply:(id /* block */)a1;
- (id)initWithConnection:(id)a0 serialQueue:(id)a1;
- (oneway void)requestCalls:(id /* block */)a0;

@end
