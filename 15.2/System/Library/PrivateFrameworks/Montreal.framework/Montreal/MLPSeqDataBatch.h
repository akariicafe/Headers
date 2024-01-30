@class NSArray, MLPNDArrayLossLabels;

@interface MLPSeqDataBatch : MLPDataBatch

@property (retain) NSArray *matrix;
@property (retain) MLPNDArrayLossLabels *combinedLossLabels;
@property unsigned long long labelsCount;

- (void).cxx_destruct;
- (id)initWithDataBatch:(id)a0 batchSize:(unsigned long long)a1 network:(id)a2;

@end
