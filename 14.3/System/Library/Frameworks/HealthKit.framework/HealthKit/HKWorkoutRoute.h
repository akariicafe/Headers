@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample

@property (retain, nonatomic, setter=_setCodableWorkoutRoute:) HDCodableLocationSeries *_codableWorkoutRoute;

+ (id)_workoutRouteWithDevice:(id)a0 metadata:(id)a1;
+ (BOOL)_isConcreteObjectClass;

- (void).cxx_destruct;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (BOOL)_isSmoothed;
- (BOOL)_requiresPrivateEntitlementForQueries;
- (id)_validateSample;
- (id)_valueDescription;

@end
