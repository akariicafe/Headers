@class NSOperation, NSArray, NSMutableArray;

@interface STSDownloadOperationInfo : NSObject {
    NSMutableArray *_beginBlocks;
    NSMutableArray *_progressBlocks;
    NSMutableArray *_completionBlocks;
}

@property (readonly, nonatomic) NSOperation *operation;
@property (readonly, copy, nonatomic) NSArray *progressBlocks;
@property (readonly, copy, nonatomic) NSArray *completionBlocks;

- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addBegin:(id /* block */)a0;
- (void)addProgress:(id /* block */)a0;
- (id)beginBlocks;
- (id)initWithOperation:(id)a0 begin:(id /* block */)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
