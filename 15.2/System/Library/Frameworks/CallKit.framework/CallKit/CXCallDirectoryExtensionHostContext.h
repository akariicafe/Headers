@class NSString, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryProviderHostProtocol;

@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryProviderHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)isIncrementalLoadingAllowed:(id /* block */)a0;
- (oneway void)addBlockingEntriesWithData:(id)a0 reply:(id /* block */)a1;
- (oneway void)removeBlockingEntriesWithData:(id)a0 reply:(id /* block */)a1;
- (oneway void)removeAllBlockingEntriesWithReply:(id /* block */)a0;
- (oneway void)addIdentificationEntriesWithData:(id)a0 reply:(id /* block */)a1;
- (oneway void)removeIdentificationEntriesWithData:(id)a0 reply:(id /* block */)a1;
- (oneway void)removeAllIdentificationEntriesWithReply:(id /* block */)a0;
- (oneway void)completeRequestWithReply:(id /* block */)a0;
- (void)requestFailedWithError:(id)a0 completion:(id /* block */)a1;

@end
