@class NSMutableDictionary, NSMutableArray;

@interface TFContainerPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *singletons;
@property (retain, nonatomic) NSMutableDictionary *containerSingletons;
@property (retain, nonatomic) NSMutableDictionary *graph;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long drainDepth;
@property (nonatomic, getter=isObjectGraphDrainingEnabled) BOOL objectGraphDrainingEnabled;
@property (retain, nonatomic) NSMutableArray *onDrainBlocks;
@property (retain, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks;
@property (readonly, nonatomic, getter=isPoolPreparedForLockingGraph) BOOL poolPreparedForLockingGraph;

- (id)copyWithObjectGraphDrainingDisabled;
- (void)drain;
- (void).cxx_destruct;
- (id)initWithSingletonPool:(id)a0;
- (id)init;
- (void)onDrainCopyPoolObjectGraph:(id /* block */)a0;
- (id)enter:(id /* block */)a0;
- (void)onDrain:(id /* block */)a0;
- (void)linkDepth:(id /* block */)a0;

@end
