@class NFLBatchContext, NSMutableArray;

@interface NFLBatch : NSObject

@property (nonatomic) double batchHeight;
@property (retain, nonatomic) NSMutableArray *layoutInfos;
@property (copy, nonatomic) NFLBatchContext *batchContext;

- (id)init;
- (void).cxx_destruct;
- (void)addLayoutInfo:(id)a0;
- (void)addLayoutInfos:(id)a0;

@end
