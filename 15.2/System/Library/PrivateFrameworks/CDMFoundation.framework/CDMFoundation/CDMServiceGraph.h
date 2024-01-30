@class NSLock, NSString, NSError, NLXSchemaNLXClientEventMetadata, NSMutableDictionary, NSDictionary, NSMutableArray, CDMServiceGraphNode;

@interface CDMServiceGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableDictionary *_serviceMap;
    id _graphOutput;
    id _graphInput;
    NSString *_language;
    NSDictionary *_startCommand;
    NSString *_handlerId;
    CDMServiceGraphNode *_endNode;
    NSLock *_aneLock;
    NLXSchemaNLXClientEventMetadata *_selfMetadata;
}

@property (retain, nonatomic) NSError *error;

- (void)failedWithError:(id)a0;
- (id)validateRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAcyclic;
- (id)getNodes;
- (id)getServiceByClass:(Class)a0;
- (id)getGraphInput;
- (id)getLanguage;
- (void)failedWithErrorCode:(long long)a0 errorDomain:(id)a1 message:(id)a2;
- (id)addNodeWithName:(id)a0 bindService:(id)a1 block:(id /* block */)a2;
- (void)setGraphOutput:(id)a0;
- (id)addNodeWithName:(id)a0 block:(id /* block */)a1;
- (Class)supportedGraphInputType;
- (void)buildGraph;
- (id)getEndNode;
- (id)getGraphOutput;
- (id)getHandlerId;
- (id)initWithServices:(id)a0 graphInput:(id)a1 languageCode:(id)a2 startCommand:(id)a3 handlerId:(id)a4 aneLock:(id)a5 selfMetadata:(id)a6;
- (void)buildGraphInternal;
- (id)toMermaid;
- (id)topoSort;
- (id)addNodeWithName:(id)a0 bindService:(id)a1 aneEnabled:(BOOL)a2 block:(id /* block */)a3;
- (id)getSelfMetadata;
- (id)removeLRMCharacter:(id)a0;
- (id)initWithServices:(id)a0 graphInput:(id)a1 languageCode:(id)a2 startCommand:(id)a3 handlerId:(id)a4 aneLock:(id)a5;
- (id)addNodeWithName:(id)a0 aneEnabled:(BOOL)a1 block:(id /* block */)a2;
- (id)getStartCommand;

@end
