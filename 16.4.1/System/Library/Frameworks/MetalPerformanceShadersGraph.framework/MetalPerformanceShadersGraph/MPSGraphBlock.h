@class MPSGraphRegion, MPSGraphOperation, NSMutableArray;

@interface MPSGraphBlock : NSObject {
    MPSGraphOperation *_terminator;
    NSMutableArray *_blockOperations;
    void *_mlirBlock;
    MPSGraphRegion *_parentRegion;
}

- (id)init;
- (void).cxx_destruct;
- (void)addTerminatorOperation:(id)a0;
- (id)parentOp;

@end
