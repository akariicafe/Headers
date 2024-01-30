@class NSString, NSOperationQueue, NSHashTable, LiveFSFPExtensionHelper;

@interface LiveFSValidationServiceSource : NSObject <NSXPCListenerDelegate, NSFileProviderValidationServiceV1, NSFileProviderServiceSource> {
    LiveFSFPExtensionHelper *_fileProviderExtension;
    NSString *_itemIdentifier;
    NSOperationQueue *_operationQueue;
    NSHashTable *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serviceName;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)makeListenerEndpointAndReturnError:(id *)a0;
- (id)initWithFileProviderExtension:(id)a0 itemIdentifier:(id)a1;
- (void)validation_allowValidation:(id /* block */)a0;
- (void)validation_evictDocumentWithCompletionHandler:(id /* block */)a0;
- (void)validation_shareDocumentWithCompletionHandler:(id /* block */)a0;

@end
