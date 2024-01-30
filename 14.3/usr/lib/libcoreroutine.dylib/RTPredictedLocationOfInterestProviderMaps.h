@class NSString, RTMapsSupportManager, NSObject;
@protocol OS_dispatch_queue;

@interface RTPredictedLocationOfInterestProviderMaps : NSObject <RTPredictedLocationOfInterestProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryRouteFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 historyEntryRoutes:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPredictedExitDatesWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryPlaceDisplayFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 historyEntryPlaceDisplays:(id)a3;
- (id)initWithMapsSupportManager:(id)a0;

@end
