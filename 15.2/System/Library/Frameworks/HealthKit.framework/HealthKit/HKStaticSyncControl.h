@class NSString, HKProxyProvider;

@interface HKStaticSyncControl : NSObject <_HKXPCExportable, HKStaticSyncControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)runStaticSyncExportWithOptions:(unsigned long long)a0 storeIdentifier:(id)a1 URL:(id)a2 batchSize:(unsigned long long)a3 progressHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)runStaticSyncImportWithOptions:(unsigned long long)a0 storeIdentifier:(id)a1 URL:(id)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;

@end
