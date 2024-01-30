@class NSString, NSXPCConnection, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle>

@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *hasSentDataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataMutationCompletionsByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *volatileDataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *hasSentVolatileDataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *volatileDataMutationCompletionsByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *publisherClientsByDomain;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_internalQueue_reregisterForPublishingDomains;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingBlock:(id /* block */)a2 fallbackDataProvider:(id /* block */)a3 completion:(id /* block */)a4;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_tearDownXPCConnection;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingBlock:(id /* block */)a2 fallbackDataProvider:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_internalQueue_publishData:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 completion:(id /* block */)a3;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)_internalQueue_publishDiffToServer:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 reply:(id /* block */)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_internalQueue_dataForDomain:(unsigned long long)a0;
- (void)_internalQueue_publishDataToServer:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 reply:(id /* block */)a3;
- (id)succinctDescriptionBuilder;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (id)_internalQueue_volatileDataForDomain:(unsigned long long)a0;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_internalQueue_publishData:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 dataSendBlock:(id /* block */)a3 diffSendBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)_resendData;

@end
