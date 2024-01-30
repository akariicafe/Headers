@class RTMapServiceManager, RTEventModelProvider, RTLearnedLocationManager, NSString, RTEventManager, NSObject;
@protocol OS_dispatch_queue;

@interface RTPredictedLocationOfInterestProviderCalendar : NSObject <RTPredictedLocationOfInterestProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTEventManager *eventManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)reasonableDistanceBetweenEventLocation:(id)a0 andLocation:(id)a1;

- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEventManager:(id)a0 eventModelProvider:(id)a1 learnedLocationManager:(id)a2 mapServiceManager:(id)a3;
- (void)_fetchPredictedLocationsOfInterestOnDate:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedExitDatesWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 handler:(id /* block */)a3;
- (void)_fetchPredictedLocationOfInterestAtEvent:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationOfInterestForEvent:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;

@end
