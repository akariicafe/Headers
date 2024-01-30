@class MLArrayBatchProvider;

@interface _PSMLArrayProvider : NSObject

@property (retain, nonatomic) MLArrayBatchProvider *MLArrayProvider;
@property (nonatomic) int clusteringCount;
@property (nonatomic) int recencyCount;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 clusteringCount:(int)a1 recencyCount:(int)a2;

@end
