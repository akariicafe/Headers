@class VMUDebugTimer;
@protocol VMUCommonGraphInterface, VMUStackLogReader;

@interface VMUStackLogConsolidator : NSObject {
    id<VMUCommonGraphInterface> _graph;
    id<VMUStackLogReader> _stackLogReader;
}

@property (retain, nonatomic) VMUDebugTimer *debugTimer;

- (void).cxx_destruct;
- (id)stackIDsToNodesWithFilter:(id /* block */)a0;
- (id)initWithGraph:(id)a0 stackLogReader:(id)a1;
- (id)callTreeWithOptions:(unsigned long long)a0 nodeFilter:(id /* block */)a1;

@end
