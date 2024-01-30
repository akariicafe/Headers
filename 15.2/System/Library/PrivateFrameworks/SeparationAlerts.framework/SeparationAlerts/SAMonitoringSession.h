@class CLLocation, NSUUID, CLCircularRegion, NSDate, TALocationLite, SAScenarioClassifier;

@interface SAMonitoringSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *deviceUUID;
@property (retain, nonatomic) CLCircularRegion *geofence;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long scenario;
@property (retain, nonatomic) NSDate *trackedTravelingStartDate;
@property (retain, nonatomic) NSDate *travelingGeofenceExitDate;
@property (retain, nonatomic) TALocationLite *trackedTravelingStartLocation;
@property (retain, nonatomic) SAScenarioClassifier *scenarioClassifier;
@property (nonatomic) BOOL earlyVehicularTrigger;
@property (nonatomic) BOOL earlyAirplaneTrigger;
@property (retain, nonatomic) NSDate *caLastStateTransition;
@property (retain, nonatomic) CLLocation *caSeparationLocation;

- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceUUID:(id)a0 state:(unsigned long long)a1 geofence:(id)a2 scenario:(unsigned long long)a3 trackedTravelingStartDate:(id)a4;

@end
