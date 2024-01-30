@class NSObject, NSMutableDictionary, RTMetricManager, RTStateModelEarliestLatestEl;
@protocol OS_dispatch_queue;

@interface RTStateModel : NSObject

@property (retain, nonatomic) RTStateModelEarliestLatestEl *earliestLatestStateModelEl;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) NSMutableDictionary *stateModelLut;

+ (double)getDistfromLat:(double)a0 fromLon:(double)a1 toLat:(double)a2 toLon:(double)a3;
+ (double)deriveClusterThresholdFromUncClustAplha:(double)a0 andUncClustBeta:(double)a1;
+ (double)getOutOfStateConfidenceWithOneStatePred:(id)a0;

- (BOOL)anyClusterOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 andEnteredEarlierThan:(double)a2;
- (id)getPredictedLocationsOfInterestWithCriteria:(id)a0;
- (void)updateInternalState;
- (double)getNumberOfWeeksInStateModel;
- (unsigned int)calculateStateModelAvailabilityPrecisionRecallOnDate:(id)a0 predictedLocations:(id)a1 isHighConfidenceOnly:(BOOL)a2;
- (id)getMostRecentLocationForDate:(id)a0;
- (id)initWithLearnedLocationsOfInterest:(id)a0 metricManager:(id)a1 queue:(id)a2;
- (id)getNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2;
- (id)findClusterWithLocation:(id)a0;
- (id)getPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getAllLOIsWithinDistance:(double)a0 ofLocation:(id)a1;
- (id)_getRecursivelyAllLOIsWithinDistance:(double)a0 ofLocation:(id)a1 previouslyFoundLocationsOfInterest:(id)a2;
- (id)_getNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2;
- (id)init;
- (id)getLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1;
- (void)collectMetricsWithIntervalSinceLastUpdate:(double)a0;
- (id)getOOStClusterData:(double)a0 predictionWindow:(double)a1 numOfWeeks:(int)a2 refLoc:(id)a3;
- (id)getPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1;
- (void)logStateModelAvailabilityMetricWithIntervalSinceLastUpdate:(double)a0 untilNow:(id)a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })getEndingCoordinateWithStartingLocation:(id)a0 distance:(double)a1;
- (void).cxx_destruct;
- (double)getMaxDistFromInterval:(double)a0 withVelocity:(double)a1;

@end
