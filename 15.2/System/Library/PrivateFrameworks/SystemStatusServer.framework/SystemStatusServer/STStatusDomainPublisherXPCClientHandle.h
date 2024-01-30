@class NSSet, NSXPCConnection, NSMutableSet, NSString, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle>

@property (readonly, weak, nonatomic) id<STStatusDomainPublisherServerHandle> serverHandle;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSXPCConnection *clientXPCConnection;
@property (readonly, nonatomic) BSMutableIntegerMap *dataByDomain;
@property (readonly, nonatomic) BSMutableIntegerMap *volatileDataByDomain;
@property (readonly, nonatomic) BSMutableIntegerMap *fallbackDataByDomain;
@property (readonly, copy, nonatomic) NSSet *entitledDomains;
@property (readonly, copy, nonatomic) NSMutableSet *publishingDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_internalQueue_volatileDataForDomain:(unsigned long long)a0;
- (id)_internalQueue_fallbackDataForDomain:(unsigned long long)a0;
- (void)_internalQueue_unregisterFromPublishingDomain:(unsigned long long)a0;
- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (id)_internalQueue_dataForDomain:(unsigned long long)a0;
- (void)publishDiff:(id)a0 forDomain:(unsigned long long)a1 replacingData:(BOOL)a2 discardingOnExit:(BOOL)a3 reply:(id /* block */)a4;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)registerToPublishDomain:(unsigned long long)a0 fallbackData:(id)a1;
- (void)publishData:(id)a0 forDomain:(unsigned long long)a1 discardingOnExit:(BOOL)a2 reply:(id /* block */)a3;
- (void)unregisterFromPublishingDomain:(unsigned long long)a0;

@end
