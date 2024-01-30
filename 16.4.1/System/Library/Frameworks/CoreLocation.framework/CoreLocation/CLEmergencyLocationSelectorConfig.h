@class CLEmergencyLocationUsabilityCriteria;

@interface CLEmergencyLocationSelectorConfig : NSObject

@property (nonatomic) long long feature;
@property (nonatomic) BOOL firstUpdateEnabled;
@property (nonatomic) double firstUpdateTimeout;
@property (nonatomic) BOOL periodicUpdatesEnabled;
@property (retain, nonatomic) CLEmergencyLocationUsabilityCriteria *firstLocationUsabilityCriteria;
@property (nonatomic) double firstLocationMaxEarlyReturnHunc;
@property (nonatomic) double firstLocationMaxEarlyReturnVunc;
@property (retain, nonatomic) CLEmergencyLocationUsabilityCriteria *locationUpdateUsabilityCriteria;
@property (nonatomic) double locationUpdateHuncReductionToSendEarly;
@property (nonatomic) double locationUpdateVuncReductionToSendEarly;
@property (nonatomic) double locationUpdateDistanceMovedToSendEarly;
@property (nonatomic) double locationUpdateChangeInAltitudeToSendEarly;
@property (nonatomic) BOOL firstLocationEarlyReturnEnabled;
@property (nonatomic) double firstLocationTimeout;
@property (nonatomic) double locationUpdateTimeout;
@property (nonatomic) double locationUpdateMinDelay;

+ (id)featureString:(long long)a0;

- (void)dealloc;
- (id)initForFeature:(long long)a0 withUpdatesEnabled:(BOOL)a1;
- (void)printConfiguration;
- (void)setDefaultsForSIP;

@end
