@class NSMutableDictionary, NCLocation, NCAltitude, NSObject, NCBearing, CMAltimeter, NCHeading, CLLocationManager, NSString, NSMutableSet, NSUserDefaults, CMMotionManager, NSNumber, NCIncline;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NCManager : NSObject <CLLocationManagerDelegate> {
    BOOL _complicationStyle;
    CMAltimeter *_altimeterManager;
    unsigned long long _altimeterToken;
    NSMutableDictionary *_altimeterUpdateHandlers;
    NSMutableSet *_altimeterPausedTokens;
    BOOL _runningAltimeter;
    CMMotionManager *_motionManager;
    unsigned long long _motionToken;
    NSMutableDictionary *_motionUpdateHandlers;
    NSMutableSet *_motionPausedTokens;
    BOOL _runningMotion;
    NSObject<OS_dispatch_queue> *_motionUpdateQueue;
    NSObject<OS_dispatch_source> *_motionUpdateTimer;
    double _motionUpdateInterval;
    NSNumber *_motionStartingAccuracy;
    NSNumber *_motionEndingAccuracy;
    CLLocationManager *_locationManager;
    unsigned long long _locationToken;
    NSMutableDictionary *_locationUpdateHandlers;
    BOOL _runningLocation;
    BOOL _triedInitialLocation;
    int _locationAuthorizationStatus;
    BOOL _currentCoarseLocationStatus;
    NSMutableSet *_locationServiceUpdateHandlers;
    long long _locationAccuracyState;
    BOOL _externallyPaused;
    NSUserDefaults *_defaults;
}

@property (class, readonly, nonatomic) NCManager *sharedAppManager;
@property (class, readonly, nonatomic) NCManager *sharedComplicationManager;
@property (class, readonly, nonatomic) BOOL showingIdealizedData;
@property (class, readonly, nonatomic) BOOL _showsElevationAccuracy;

@property (retain, nonatomic) NCHeading *heading;
@property (retain, nonatomic) NCIncline *incline;
@property (retain, nonatomic) NCLocation *location;
@property (retain, nonatomic) NCAltitude *altitude;
@property (retain, nonatomic) NCBearing *bearing;
@property (nonatomic) BOOL usesTrueNorth;
@property (readonly, nonatomic) BOOL calibrated;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL locationTimeoutTimerStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(BOOL)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handlePrefsChanged;
- (void)_startLocationUpdates;
- (void)stopLocationUpdatesForToken:(id)a0;
- (id)startLocationUpdatesWithHandler:(id /* block */)a0;
- (void)setCalibrated:(BOOL)a0;
- (void)stopMotionUpdatesForToken:(id)a0;
- (BOOL)isAbsoluteAltimeterAvailable;
- (void)stopAltimeterUpdateForToken:(id)a0;
- (void)_updateTrueNorthFromUserDefaults;
- (void)_queue_motionUpdate;
- (void)_queue_motionError:(id)a0;
- (id)_newAltimeter;
- (void)_updateAltimeterRunning;
- (id)startMotionUpdatesWithUpdateRate:(long long)a0 handler:(id /* block */)a1 calibratedHandler:(id /* block */)a2;
- (void)_updateMotionRunning;
- (void)_updateLocationRunning;
- (BOOL)_isLocationServiceOff;
- (void)_updateRunning;
- (void)_invalidateLocationTimeoutTimer;
- (void)_startAbsoluteAltimeterUpdate;
- (void)_queue_altimeterUpdate:(id)a0;
- (void)_queue_altimeterError:(id)a0;
- (void)_queue_altimeterUpdate;
- (unsigned long long)_referenceFrameForDeviceMotion;
- (void)_updateMotionTimerRate;
- (void)_queue_updateMotion:(id)a0;
- (void)_stopLocationUpdates:(BOOL)a0;
- (void)_updateLocationManagerWithCurrentAuthorizationStatus;
- (void)_restartLocationTimeoutTimer;
- (void)_notifyLocationUpdateHandlers;
- (void)_requestBetterLocation;
- (void)_startLocationTimeoutTimer;
- (double)_defaultLocationAccuracy;
- (void)_updateLocation:(id)a0 error:(id)a1;
- (id)startAltimeterUpdateWithHandler:(id /* block */)a0;
- (id)startMotionUpdatesWithHandler:(id /* block */)a0 calibratedHandler:(id /* block */)a1;
- (void)getLocationServiceUpdateWithHandler:(id /* block */)a0;
- (void)setPaused:(BOOL)a0 forAltimeterToken:(id)a1;
- (void)setPaused:(BOOL)a0 forMotionToken:(id)a1;
- (void)_locationTimeoutTimerFired:(id)a0;
- (void)_takeLocationAssertion;
- (void)_cancelLocationAssertion;
- (void)setValueForBearing:(double)a0;
- (void)clearValueForBearing;

@end
