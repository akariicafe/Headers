@class RTVehicleLocationProvider, RTDistanceCalculator, NSString;

@interface RTPredictedLocationOfInterestProviderVehicleLocation : NSObject <RTPredictedLocationOfInterestProvider>

@property (readonly, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPredictedExitDatesWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)predictedLocationOfInterestFromVehicleEvent:(id)a0;
- (BOOL)parkingEventIsUsualAndNearHome:(id)a0;
- (id)locationOfInterestFromVehicleEvent:(id)a0;
- (id)initWithVehicleLocationProvider:(id)a0 distanceCalculator:(id)a1;

@end
