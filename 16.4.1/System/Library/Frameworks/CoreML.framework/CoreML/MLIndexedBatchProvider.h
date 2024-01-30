@class NSArray;
@protocol MLBatchProvider;

@interface MLIndexedBatchProvider : NSObject <MLBatchProvider>

@property (retain, nonatomic) id<MLBatchProvider> fullBatch;
@property (retain, nonatomic) NSArray *indices;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithBatch:(id)a0 indices:(id)a1 error:(id *)a2;

@end
