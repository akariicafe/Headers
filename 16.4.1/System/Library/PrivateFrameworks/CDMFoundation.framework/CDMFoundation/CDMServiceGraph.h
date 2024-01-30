@class NSLock, NSMutableDictionary, NSString, CDMDataDispatcher, NSError, NSMutableArray, CDMServiceGraphNode;

@interface CDMServiceGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableDictionary *_nodesWithName;
    NSMutableDictionary *_serviceMap;
    id _graphOutput;
    id _graphInput;
    NSString *_language;
    NSString *_handlerId;
    CDMServiceGraphNode *_endNode;
    NSLock *_aneLock;
    CDMDataDispatcher *_dataDispatcher;
    NSMutableDictionary *_skipNodes;
}

@property (retain, nonatomic) NSError *error;

+ (int)getCdmRequesterWithConnectionId:(id)a0;
+ (id)requiredDAGServices;
+ (BOOL)shouldSkipNode:(id)a0 service:(id)a1;

- (BOOL)isAcyclic;
- (void)failedWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)getLanguage;
- (id)getNodes;
- (id)validateRequest:(id)a0;
- (id)getSkippedNodes;
- (void)setGraphOutput:(id)a0;
- (id)addNodeWithName:(id)a0 aneEnabled:(BOOL)a1 block:(id /* block */)a2;
- (id)addNodeWithName:(id)a0 bindService:(id)a1 aneEnabled:(BOOL)a2 block:(id /* block */)a3;
- (id)addNodeWithName:(id)a0 bindService:(id)a1 block:(id /* block */)a2;
- (id)addNodeWithName:(id)a0 block:(id /* block */)a1;
- (void)buildGraph;
- (void)buildGraphInternal;
- (void)failedWithErrorCode:(long long)a0 errorDomain:(id)a1 message:(id)a2;
- (id)getDataDispatcher;
- (id)getEndNode;
- (id)getGraphInput;
- (id)getGraphOutput;
- (id)getHandlerId;
- (id)getNodesWithName;
- (id)getServiceByClass:(Class)a0;
- (id)initWithServices:(id)a0 graphInput:(id)a1 languageCode:(id)a2 handlerId:(id)a3 aneLock:(id)a4;
- (id)initWithServices:(id)a0 graphInput:(id)a1 languageCode:(id)a2 handlerId:(id)a3 aneLock:(id)a4 dataDispatcher:(id)a5;
- (void)populateRequesterEnumForNluRequest:(id)a0;
- (void)skipNode:(id)a0 basedOnNode:(id)a1 withCondition:(id /* block */)a2;
- (Class)supportedGraphInputType;
- (id)toMermaid;
- (id)topoSort;

@end
