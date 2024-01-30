@protocol MLBatchProvider;

@interface MLLazyUnionBatchProvider : NSObject <MLBatchProvider>

@property (retain, nonatomic) id<MLBatchProvider> first;
@property (retain, nonatomic) id<MLBatchProvider> second;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithFeaturesFrom:(id)a0 addedToFeaturesFrom:(id)a1 error:(id *)a2;

@end
