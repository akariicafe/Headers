@class NSMutableDictionary, BWMemoryPool, NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group, BWGraphStatusDelegate, OS_dispatch_queue;

@interface BWGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableDictionary *_outputsWithSharedPoolsForAttachedMedia;
    NSMutableArray *_nodesToPrepareConcurrently;
    NSArray *_nodesToPrepareAfterGraphStart;
    NSMutableArray *_deferredPreparePrioritySinks;
    BOOL _deferredNodePrepareCancelled;
    NSMutableArray *_deferredStartSourceNodes;
    BOOL _haveStartedOrCancelledDeferredSourceNodes;
    BOOL _running;
    BOOL _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_sourceNodesStartGroup;
    NSObject<OS_dispatch_group> *_nonDeferredSourceNodesStartGroup;
    NSObject<OS_dispatch_queue> *_sourceStartQueue;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    BOOL _supportsLiveReconfiguration;
    BOOL _classicRetainedBufferCount;
    NSString *_applicationID;
    int _clientPID;
    NSString *_modeDescription;
    NSString *_sourceDescription;
    int _graphStateTransitionTimeoutSeconds;
    unsigned int _configurationQueuePriority;
}

@property int errorStatus;
@property (readonly, nonatomic) BOOL deferredNodePrepareEnabled;
@property (nonatomic) BOOL resumesConnectionsAsNodesArePrepared;
@property (readonly, nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) id<BWGraphStatusDelegate> statusDelegate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;

+ (void)initialize;

- (BOOL)start:(id *)a0;
- (int)clientPID;
- (id)applicationID;
- (void)enableDeferredStartForSourceNode:(id)a0;
- (id)_sourceNodes;
- (id)dotString;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)a0;
- (void)cancelDeferredSourceNodeStart;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)a0;
- (BOOL)commitConfigurationWithID:(long long)a0 error:(id *)a1;
- (id)_reverseBreadthFirstEnumerator;
- (id)sourceDescription;
- (BOOL)_resolveFormats:(id *)a0;
- (id)initWithConfigurationQueuePriority:(unsigned int)a0;
- (void)notifyWhenNonDeferredSourceNodesHaveStarted:(id /* block */)a0;
- (BOOL)addNode:(id)a0 error:(id *)a1;
- (BOOL)connectOutput:(id)a0 toInput:(id)a1 pipelineStage:(id)a2;
- (void)waitForNonDeferredSourceNodesToStart;
- (BOOL)stop:(id *)a0;
- (void)setClientPID:(int)a0;
- (void)enableConcurrentPrepareForNode:(id)a0;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)a0;
- (void)setSourceDescription:(id)a0;
- (id)init;
- (void)setApplicationID:(id)a0;
- (void)beginConfiguration;
- (id)_breadthFirstEnumerator;
- (id)_sinkNodes;
- (void)setModeDescription:(id)a0;
- (id)modeDescription;
- (void)dealloc;
- (void)startDeferredSourceNodesIfNeeded;
- (void)cancelDeferredNodePrepare;
- (void)waitForStartOrCommitToComplete;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id /* block */)a0;

@end
