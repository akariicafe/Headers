@class NSString, NSXPCConnection, NSSet, NSMutableSet, NSObject, BSMutableIntegerMap;
@protocol OS_dispatch_queue, STStatusDomainServerHandle;

@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle> {
    id<STStatusDomainServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_observingDomains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (void).cxx_destruct;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)observeDomains:(id)a0;
- (void)reportUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)serverDataForDomains:(id)a0 reply:(id /* block */)a1;
- (void)stopObservingDomains:(id)a0;

@end
