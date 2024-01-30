@class NSObject, NSString, FCAsyncSerialQueue;
@protocol NTTodayResultsFetchDescriptor, FCContentContext, FCReadablePrivateDataStorage;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource>

@property (readonly, copy, nonatomic) id<NTTodayResultsFetchDescriptor> fetchDescriptor;
@property (readonly, nonatomic) id<FCReadablePrivateDataStorage> privateDataStorage;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (nonatomic, getter=hasFlushingBeenEnabled) BOOL flushingHasBeenEnabled;
@property (retain, nonatomic) NSObject *latestResultRecordsHoldToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderResultsWithFetchDescriptor:(id)a0 contentContext:(id)a1 operationInfo:(id)a2;

- (void)fetchLatestResultsWithOperationInfo:(id)a0 completion:(id /* block */)a1;
- (id)placeholderResultsWithOperationInfo:(id)a0;
- (id)initWithFetchDescriptor:(id)a0 privateDataStorage:(id)a1 contentContext:(id)a2 fetchQueue:(id)a3;
- (void).cxx_destruct;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (id)init;
- (void)_fetchLatestResultsWithOperationInfo:(id)a0 prefetchedContent:(id)a1 completion:(id /* block */)a2;
- (void)_fetchTodayModuleDescriptorsWithContentRequests:(id)a0 requireRefreshedAppConfig:(BOOL)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;

@end
