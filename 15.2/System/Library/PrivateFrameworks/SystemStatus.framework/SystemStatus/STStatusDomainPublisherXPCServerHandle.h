@class NSString, NSXPCConnection, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle>

@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataMutationCompletionsByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *volatileDataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *volatileDataMutationCompletionsByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *publisherClientsByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *fallbackDataByDomain;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection;
@property (readonly, copy, nonatomic) id /* block */ xpcConnectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (void)_tearDownXPCConnection;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_internalQueue_mutateDataForDomain:(unsigned long long)a0 discardingOnExit:(BOOL)a1 wrappingCompletion:(id /* block */)a2 usingBlock:(id /* block */)a3;
- (id)succinctDescription;
- (id)initWithXPCConnectionProvider:(id /* block */)a0;
- (void)_internalQueue_publishDiffToServer:(id)a0 forDomain:(unsigned long long)a1 replacingData:(BOOL)a2 discardingOnExit:(BOOL)a3 reply:(id /* block */)a4;
- (void)_internalQueue_publishData:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 completion:(id /* block */)a3;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (id)_internalQueue_dataForDomain:(unsigned long long)a0 usingFallbackIfNecessary:(BOOL)a1;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)_internalQueue_publishDiff:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_internalQueue_publishDataToServer:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 reply:(id /* block */)a3;
- (id)_internalQueue_volatileDataForDomain:(unsigned long long)a0 usingFallbackIfNecessary:(BOOL)a1;
- (void)_resendData;
- (id)succinctDescriptionBuilder;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)_internalQueue_reregisterForPublishingDomains;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 completion:(id /* block */)a3;

@end
