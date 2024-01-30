@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BBRemoteDataProviderStoreDelegate;

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore> {
    BOOL _connected;
    id<BBRemoteDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    BOOL _clientReady;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDataProvider:(id)a0;
- (void)remoteDataProviderNeedsToWakeClient:(id)a0;
- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)addDataProviderWithSectionID:(id)a0 clientProxy:(id)a1 identity:(id)a2 completion:(id /* block */)a3;
- (void)removeDataProviderWithSectionID:(id)a0;
- (id)dataProviderForSectionID:(id)a0;
- (id)initWithServiceName:(id)a0 bundleID:(id)a1 delegate:(id)a2;
- (void)addParentSectionFactory:(id)a0;
- (void)performBlockOnDataProviders:(id /* block */)a0;
- (void)clientIsReady:(id /* block */)a0;
- (void)_queue_removeDataProvider:(id)a0;
- (id)dataProvidersForUniversalSectionID:(id)a0;
- (void).cxx_destruct;
- (void)setConnected:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadAllDataProviders;

@end
