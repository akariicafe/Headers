@class NSMutableArray, MPSGraphOperation;

@interface MPSGraphRegion : NSObject {
    NSMutableArray *_blocks;
    MPSGraphOperation *_parentOp;
}

- (void).cxx_destruct;
- (id)init;
- (id)appendNewBlock;

@end
