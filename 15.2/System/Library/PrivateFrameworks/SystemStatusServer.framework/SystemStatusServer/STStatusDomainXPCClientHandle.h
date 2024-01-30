@class NSSet, NSXPCConnection, NSMutableSet, NSString, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue, STStatusDomainServerHandle;

@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle>

@property (readonly, weak, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSXPCConnection *clientXPCConnection;
@property (readonly, nonatomic) BSMutableIntegerMap *dataByDomain;
@property (readonly, copy, nonatomic) NSSet *entitledDomains;
@property (readonly, copy, nonatomic) NSMutableSet *observingDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (void).cxx_destruct;
- (void)observeDomains:(id)a0;
- (void)stopObservingDomains:(id)a0;
- (void)reportUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1;
- (void)_internalQueue_observeData:(id)a0 forDomain:(unsigned long long)a1 dataSendBlock:(id /* block */)a2 diffSendBlock:(id /* block */)a3;

@end
