@class IKJSInspectorNetworkAgent, NSString, NSMutableDictionary, RWIProtocolNetworkDomainEventDispatcher;

@interface _IKJSInspectorNetworkLoader : NSObject <IKNetworkRequestLoader>

@property (copy, nonatomic) NSString *parentIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) IKJSInspectorNetworkAgent *agent;
@property (readonly, weak, nonatomic) RWIProtocolNetworkDomainEventDispatcher *dispatcher;
@property (readonly, nonatomic) NSMutableDictionary *requestRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)recordForResource:(long long)a0 withInitiator:(long long)a1;
- (id)_recordForResource:(long long)a0 withInitiator:(long long)a1 synchronousOperation:(BOOL)a2;
- (double)currentTimeIntervalSince1970;
- (void)dispatchEventWithBlock:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 agent:(id)a2 dispatcher:(id)a3;

@end
