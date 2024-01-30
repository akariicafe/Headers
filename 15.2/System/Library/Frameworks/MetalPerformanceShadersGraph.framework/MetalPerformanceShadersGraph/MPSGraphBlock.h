@class MPSGraphRegion, MPSGraphOperation, NSMutableArray;

@interface MPSGraphBlock : NSObject {
    MPSGraphOperation *_terminator;
    NSMutableArray *_blockOperations;
    void *_mlirBlock;
    MPSGraphRegion *_parentRegion;
}

- (void).cxx_destruct;
- (id)init;
- (void)addTerminatorOperation:(id)a0;
- (id)parentOp;

@end
