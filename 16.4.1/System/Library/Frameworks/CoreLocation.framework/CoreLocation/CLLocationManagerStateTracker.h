@interface CLLocationManagerStateTracker : CLStateTracker {
    struct _CLLocationManagerStateTrackerState { double distanceFilter; double desiredAccuracy; BOOL updatingLocation; BOOL requestingLocation; BOOL requestingRanging; BOOL updatingRanging; BOOL updatingHeading; double headingFilter; BOOL allowsLocationPrompts; BOOL allowsAlteredAccessoryLocations; BOOL dynamicAccuracyReductionEnabled; BOOL previousAuthorizationStatusValid; int previousAuthorizationStatus; BOOL limitsPrecision; long long activityType; int pausesLocationUpdatesAutomatically; BOOL paused; BOOL allowsBackgroundLocationUpdates; BOOL showsBackgroundLocationIndicator; BOOL allowsMapCorrection; BOOL batchingLocation; BOOL updatingVehicleSpeed; BOOL updatingVehicleHeading; BOOL matchInfoEnabled; BOOL groundAltitudeEnabled; BOOL fusionInfoEnabled; BOOL courtesyPromptNeeded; BOOL isAuthorizedForWidgetUpdates; BOOL trackRunInfoEnabled; } _state;
    void *_identifier;
    BOOL _inTransaction;
}

@property (nonatomic) double distanceFilter;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) BOOL updatingLocation;
@property (nonatomic) BOOL requestingLocation;
@property (nonatomic) BOOL requestingRanging;
@property (nonatomic) BOOL updatingRanging;
@property (nonatomic) BOOL updatingHeading;
@property (nonatomic) double headingFilter;
@property (nonatomic) BOOL allowsLocationPrompts;
@property (nonatomic) BOOL allowsAlteredAccessoryLocations;
@property (nonatomic) BOOL dynamicAccuracyReductionEnabled;
@property (nonatomic) BOOL previousAuthorizationStatusValid;
@property (nonatomic) int previousAuthorizationStatus;
@property (nonatomic) BOOL limitsPrecision;
@property (nonatomic) long long activityType;
@property int pausesLocationUpdatesAutomatically;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL allowsBackgroundLocationUpdates;
@property (nonatomic) BOOL showsBackgroundLocationIndicator;
@property (nonatomic) BOOL allowsMapCorrection;
@property (nonatomic) BOOL batchingLocation;
@property (nonatomic) BOOL updatingVehicleSpeed;
@property (nonatomic) BOOL updatingVehicleHeading;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) BOOL groundAltitudeEnabled;
@property (nonatomic) BOOL fusionInfoEnabled;
@property (nonatomic) BOOL courtesyPromptNeeded;
@property (nonatomic) BOOL isAuthorizedForWidgetUpdates;
@property (nonatomic) BOOL trackRunInfoEnabled;

+ (const char *)trackerStateTypeName;
+ (unsigned long long)trackerStateSize;

- (id)initWithQueue:(id)a0 identifier:(void *)a1;
- (id)initInSilo:(id)a0 withIdentifier:(void *)a1;
- (void *)identifier;
- (id)initWithQueue:(id)a0 identifier:(void *)a1 state:(id /* block */)a2;
- (void)updateState:(id /* block */)a0;
- (void)dealloc;
- (id)initInSilo:(id)a0 withIdentifier:(void *)a1 state:(id /* block */)a2;
- (BOOL)dumpState:(void *)a0 withSize:(unsigned long long)a1 hints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a2;

@end
