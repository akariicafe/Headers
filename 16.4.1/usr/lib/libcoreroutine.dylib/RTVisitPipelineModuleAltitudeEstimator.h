@class NSString, RTLocationManager;

@interface RTVisitPipelineModuleAltitudeEstimator : NSObject <RTVisitPipelineModule>

@property (readonly, nonatomic) double maxHorizontalAccuracy;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (nonatomic) double estimatedAltitude;
@property (nonatomic) double estimatedVerticalUncertainty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dateIntervalForAltitudeEstimation:(id)a0;
- (id)initWithMaxHorizontalAccuracy:(double)a0 locationManager:(id)a1;
- (void)initializeZAxisParameters;
- (BOOL)isValidForAltitudeUpdate:(id)a0;
- (void)updateAltitudeForCentroid:(id)a0 locations:(id)a1;
- (id)updateAltitudeforVisit:(id)a0;

@end
