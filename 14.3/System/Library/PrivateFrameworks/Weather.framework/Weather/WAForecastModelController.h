@class NSString, WALocationPrivacySampler, NSMutableDictionary, WFWeatherStoreService, NSOperationQueue, NSMutableSet, NSObject, WFServiceConnection;
@protocol OS_dispatch_queue;

@interface WAForecastModelController : NSObject

@property (retain) NSOperationQueue *forecastOperationQueue;
@property (retain) NSObject<OS_dispatch_queue> *incomingRequestQueue;
@property (retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property (retain) NSMutableSet *updatingCities;
@property (retain) NSMutableDictionary *completionHandlersForCity;
@property (retain, nonatomic) WFServiceConnection *connection;
@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (retain) NSOperationQueue *priorityForecastOperationQueue;
@property (retain) NSMutableSet *priorityUpdatingCities;
@property (retain) NSMutableDictionary *priorityCompletionHandlersForCity;
@property (copy) NSString *trackingParameter;
@property (readonly) WFWeatherStoreService *store;
@property (retain, nonatomic) WALocationPrivacySampler *locationGeocodingSampler;

- (BOOL)fetchForecastForCities:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)fetchForecastForCity:(id)a0 withUnits:(int)a1 requestOptions:(id)a2 completion:(id /* block */)a3;
- (BOOL)isCityBeingUpdated:(id)a0;
- (void)_handleForecastOperationCompletion:(id)a0;
- (void)dealloc;
- (id)_queue_executeFetchForCity:(id)a0 completion:(id /* block */)a1;
- (BOOL)fetchForecastForCity:(id)a0 completion:(id /* block */)a1;
- (id)_queue_executeFetchForCity:(id)a0 withUnits:(int)a1 requestOptions:(id)a2 completion:(id /* block */)a3;
- (id)_queue_executeFetchForCity:(id)a0 withUnits:(int)a1 requestOptions:(id)a2 completion:(id /* block */)a3 completionHandlersForCity:(id)a4 updatingCities:(id)a5;
- (BOOL)isPriorityCity:(id)a0;
- (id)_commaSeparatedUpdatingCitiesNames;
- (BOOL)fetchForecastForCity:(id)a0 withUnits:(int)a1 completion:(id /* block */)a2;
- (BOOL)isPriorityForecastOperationsEnabled;
- (id)_commaSeparatedPriorityUpdatingCitiesNames;
- (id)_commaSeparatedNamesForUpdatingCities:(id)a0;
- (void)cancelAllFetchRequests;
- (BOOL)isPriorityCityBeingUpdated:(id)a0;

@end
