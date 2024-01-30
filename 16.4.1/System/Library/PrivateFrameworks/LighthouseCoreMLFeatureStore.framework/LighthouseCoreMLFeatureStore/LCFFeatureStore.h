@class LCFDatabaseConnection, LCFBiomeManager;

@interface LCFFeatureStore : NSObject

@property (readonly, nonatomic) LCFBiomeManager *biomeManagerVirtualFeatureStore;
@property (readonly, nonatomic) LCFDatabaseConnection *dbFeatureStore;
@property (readonly, nonatomic) BOOL useSqlite;

- (void).cxx_destruct;
- (id)getFeatureVector:(id)a0;
- (id)getFeatureVector:(id)a0 atTime:(id)a1;
- (id)getFeatureVectorTimestamps;
- (id)getFeatureVectorWithStoreEvents:(id)a0 storeEventsInReversedOrder:(id)a1;
- (id)getFeatureVectors:(id)a0;
- (id)getFeatureVectors:(id)a0 startTime:(id)a1 endTime:(id)a2;
- (id)getMultiArrayFeatureVectors:(id)a0 vectorName:(id)a1 labelName:(id)a2;
- (id)getMultiArrayFeatureVectors:(id)a0 vectorName:(id)a1 labelName:(id)a2 startTime:(id)a3 endTime:(id)a4;
- (id)init:(id)a0 url:(id)a1 useSqlite:(BOOL)a2;
- (BOOL)updateFeatureSet:(id)a0;
- (BOOL)updateFeatureSet:(id)a0 featureVestion:(id)a1 featureValues:(id)a2;

@end
