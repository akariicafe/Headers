@class TAFilterVisitsSettings, NSSet;

@interface TAFilterSingleVisitSettings : NSObject

@property (readonly, nonatomic) double thresholdOfSignificantDuration;
@property (readonly, nonatomic) double thresholdOfSignificantDistance;
@property (readonly, nonatomic) TAFilterVisitsSettings *visitsSettings;
@property (readonly, nonatomic) NSSet *enabledLoiTypes;

+ (id)defaultSingleVisitEnabledLoiTypes;

- (id)enabledLoiTypesToString;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)initWithThresholdOfSignificantDuration:(double)a0 thresholdOfSignificantDistance:(double)a1 filterVisitsSettings:(id)a2 enabledLoiTypes:(id)a3;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)a0 thresholdOfSignificantDistanceOrDefault:(id)a1 filterVisitsSettingsOrDefault:(id)a2 enabledLoiTypesOrDefault:(id)a3;

@end
