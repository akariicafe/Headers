@class NSArray;

@interface MLPImageDataBatch : MLPDataBatch

@property (retain) NSArray *images;
@property (retain) NSArray *lossLabels;
@property (retain) NSArray *labels;

- (void).cxx_destruct;
- (id)initWithDataBatch:(id)a0 batchSize:(unsigned long long)a1 network:(id)a2;

@end
