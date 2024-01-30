@class SKCloudServiceController;
@protocol SHDataFetcher, SHDataStore;

@interface SHInsightsPersistenceController : NSObject

@property (readonly, nonatomic) id<SHDataStore> dataStore;
@property (readonly, nonatomic) id<SHDataFetcher> dataFetcher;
@property (readonly, nonatomic) SKCloudServiceController *cloudServiceController;

- (void).cxx_destruct;
- (id)initWithDataFetcher:(id)a0 dataStore:(id)a1;
- (void)queryWithCompletion:(id /* block */)a0;
- (void)clustersForLocation:(id)a0 date:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDataForCountryCode:(id)a0 withCompletion:(id /* block */)a1;
- (void)loadTargetingDataWithCompletion:(id /* block */)a0;
- (void)removeAllTargeting;

@end
