@class NSString, NSXPCConnection, NSURL, NSSet, NSObject;
@protocol OS_dispatch_queue, CXVoicemailControllerVendorProtocol, CXVoicemailControllerHostConnectionDelegate;

@interface CXVoicemailControllerHostConnection : NSObject <CXVoicemailControllerHostProtocol, CXVoicemailControllerVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) id<CXVoicemailControllerVendorProtocol> remoteObjectProxy;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (weak, nonatomic) id<CXVoicemailControllerHostConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 serialQueue:(id)a1;
- (oneway void)addOrUpdateVoicemails:(id)a0;
- (oneway void)removeVoicemails:(id)a0;
- (oneway void)requestTransaction:(id)a0 reply:(id /* block */)a1;
- (oneway void)requestVoicemails:(id /* block */)a0;

@end
