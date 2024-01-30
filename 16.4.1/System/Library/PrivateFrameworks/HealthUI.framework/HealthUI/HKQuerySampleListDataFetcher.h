@class NSString, HKHealthStore, HKQuery;

@interface HKQuerySampleListDataFetcher : NSObject <HKSampleListDataFetcher> {
    HKHealthStore *_healthStore;
    HKQuery *_query;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
