@class CLLocation, NSUUID, CLCircularRegion, NSDate, TALocationLite, SAScenarioClassifier;

@interface SAMonitoringSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *deviceUUID;
@property (retain, nonatomic) CLCircularRegion *geofence;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long scenario;
@property (retain, nonatomic) NSDate *trackedTravelingStartDate;
@property (retain, nonatomic) NSDate *travelingGeofenceExitDate;
@property (retain, nonatomic) NSDate *earlyVehicularStateChangeDate;
@property (retain, nonatomic) TALocationLite *trackedTravelingStartLocation;
@property (retain, nonatomic) TALocationLite *firstNotWithYouLocation;
@property (retain, nonatomic) SAScenarioClassifier *scenarioClassifier;
@property (nonatomic) BOOL earlyVehicularTrigger;
@property (nonatomic) BOOL earlyAirplaneTrigger;
@property (retain, nonatomic) NSDate *caLastStateTransition;
@property (retain, nonatomic) CLLocation *caSeparationLocation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDeviceUUID:(id)a0 state:(unsigned long long)a1 geofence:(id)a2 scenario:(unsigned long long)a3 trackedTravelingStartDate:(id)a4;

@end
