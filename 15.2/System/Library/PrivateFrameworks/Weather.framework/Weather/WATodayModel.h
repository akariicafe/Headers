@class NSOperationQueue, NSHashTable, NSDate, WFServiceConnection, WAForecastModel;

@interface WATodayModel : NSObject {
    NSHashTable *_observers;
    NSOperationQueue *_modelOperationQueue;
}

@property (retain, nonatomic) WFServiceConnection *connection;
@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (nonatomic) BOOL hasPendingUpdates;
@property (retain, nonatomic) WAForecastModel *forecastModel;
@property (retain, nonatomic) NSDate *lastUpdateDate;

+ (id)autoupdatingLocationModelWithPreferences:(id)a0 effectiveBundleIdentifier:(id)a1;
+ (id)currentLocationModel;
+ (id)modelWithLocation:(id)a0;

- (id)initWithLocation:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)location;
- (void)_locationUpdateCompleted:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)a0;
- (void)_forecastUpdateCompleted:(id)a0 forecastModel:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_executeForecastRetrievalForLocation:(id)a0 completion:(id /* block */)a1;
- (void)_willDeliverForecastModel:(id)a0;
- (void)_fireTodayModelForecastWasUpdated:(id)a0;
- (void)_persistStateWithModel:(id)a0;
- (void)performDelayedUpdatesForObserver:(id)a0;
- (BOOL)executeModelUpdateWithCompletion:(id /* block */)a0;
- (void)checkIfNeedsToUpdate;
- (BOOL)hasCrossedHourlyBoundary;
- (void)clearLocationUpdateState;
- (void)_fireTodayModelWantsUpdate;

@end
