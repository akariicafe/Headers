@class NSString, NSOperationQueue, NSHashTable, LiveFSFPExtensionHelper;

@interface LiveFSFPUnlockServiceSource : NSObject <NSXPCListenerDelegate, LiveFS_Unlock, NSFileProviderServiceSource> {
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

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)makeListenerEndpointAndReturnError:(id *)a0;
- (void)unlockWithPassword:(id)a0 saveToKeychain:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithFileProviderExtension:(id)a0 itemIdentifier:(id)a1;

@end
