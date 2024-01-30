@class SYBatchSyncChunk;

@interface _SYIncomingBatch : NSObject

@property (retain, nonatomic) SYBatchSyncChunk *batch;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
