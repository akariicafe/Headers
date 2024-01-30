@class NSString, MLNeuralNetworkEngine;
@protocol MLBatchProvider;

@interface _MLBatchDataSource : NSObject <ETDataProvider>

@property (readonly, nonatomic) id<MLBatchProvider> batchProvider;
@property (readonly, nonatomic) MLNeuralNetworkEngine *nnEngine;
@property (readonly, nonatomic) BOOL useForPrediction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
