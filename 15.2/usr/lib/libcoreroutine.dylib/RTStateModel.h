@class NSObject, NSMutableDictionary, RTMetricManager, RTStateModelEarliestLatestEl;
@protocol OS_dispatch_queue;

@interface RTStateModel : NSObject

@property (retain, nonatomic) RTStateModelEarliestLatestEl *earliestLatestStateModelEl;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) NSMutableDictionary *stateModelLut;

+ (double)getDistfromLat:(double)a0 fromLon:(double)a1 toLat:(double)a2 toLon:(double)a3;
+ (double)getOutOfStateConfidenceWithOneStatePred:(id)a0;
+ (double)deriveClusterThresholdFromUncClustAplha:(double)a0 andUncClustBeta:(double)a1;

- (id)getPredictedLocationsOfInterestWithCriteria:(id)a0;
- (id)getPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1;
- (double)getMaxDistFromInterval:(double)a0 withVelocity:(double)a1;
- (void)logStateModelConfidenceMetric;
- (void)updateInternalState;
- (id)initWithLearnedLocationsOfInterest:(id)a0 metricManager:(id)a1 queue:(id)a2;
- (id)getAllLOIsWithinDistance:(double)a0 ofLocation:(id)a1;
- (id)getNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2;
- (BOOL)anyClusterOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 andEnteredEarlierThan:(double)a2;
- (unsigned long long)calculateNumberOfImpossibleTransitions;
- (unsigned int)calculateStateModelAvailabilityPrecisionRecallOnDate:(id)a0 predictedLocations:(id)a1 isHighConfidenceOnly:(BOOL)a2;
- (void)logStateModelDominantPlacesMetric;
- (unsigned long long)calculateNumberOfNearbyLOIs;
- (id)getMostRecentLocationForDate:(id)a0;
- (id)getPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1;
- (unsigned long long)calculateDominantLocationsWithOptions:(id)a0;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })getEndingCoordinateWithStartingLocation:(id)a0 distance:(double)a1;
- (void)logStateModelAvailabilityMetricWithIntervalSinceLastUpdate:(double)a0 untilNow:(id)a1;
- (id)init;
- (id)_getRecursivelyAllLOIsWithinDistance:(double)a0 ofLocation:(id)a1 previouslyFoundLocationsOfInterest:(id)a2;
- (id)findClusterWithLocation:(id)a0;
- (id)_getNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2;
- (void)logStateModelAvailabilityMetricWithAvailability:(unsigned long long)a0 precisionRecall:(unsigned int)a1;
- (void)collectMetricsWithIntervalSinceLastUpdate:(double)a0;
- (void)logStateModelEntryExitsStandardDeviations;
- (double)getNumberOfWeeksInStateModel;
- (double)calculateConfidenceWithNearbyLOIs:(unsigned long long)a0 impossibleTransitions:(unsigned long long)a1;
- (id)getLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1;
- (id)getOOStClusterData:(double)a0 predictionWindow:(double)a1 numOfWeeks:(int)a2 refLoc:(id)a3;
- (void)logStateModelLengthMetric;

@end
