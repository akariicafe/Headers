@class NSString, MNTracePlayer, NSBundle, MNTraceRecorder;
@protocol MNVirtualGarageProviderDelegate, MNLocationProviderDelegate, MNNavigationTraceManagerDelegate, GEOMotionContextProviderDelegate;

@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, GEOMotionContextProvider, MNLocationProvider, MNVirtualGarageProvider> {
    BOOL _isSimulation;
}

@property (weak, nonatomic) id<MNNavigationTraceManagerDelegate> traceManagerDelegate;
@property (readonly, nonatomic) MNTracePlayer *tracePlayer;
@property (readonly, nonatomic) MNTraceRecorder *traceRecorder;
@property (nonatomic) int navigationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOMotionContextProviderDelegate> motionDelegate;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (weak, nonatomic) id<MNVirtualGarageProviderDelegate> virtualGarageDelegate;

- (void)stopUpdatingHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (void)stopMonitoringForRegion:(id)a0;
- (void)startUpdatingLocation;
- (void)startMonitoringForRegion:(id)a0;
- (BOOL)_isNavigating;
- (void)close;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetForActiveTileGroupChanged;
- (id)_defaultTraceNameForDestination:(id)a0 isSimulation:(BOOL)a1;
- (id)_tracePathForTraceName:(id)a0;
- (void)_createSymlinkForTracePath:(id)a0;
- (void)_recordEnvironmentInfo:(id)a0;
- (void)_recordStylesheet:(id)a0;
- (void)_copyTraceToCrashReporterDirectory:(id)a0;
- (id)_validFilenameForTraceName:(id)a0;
- (id)_defaultTraceExtension;
- (unsigned long long)_startIndexForNavigation;
- (void)tracePlayerDidStart:(id)a0;
- (void)tracePlayerDidStop:(id)a0;
- (void)tracePlayerDidPause:(id)a0;
- (void)tracePlayerDidResume:(id)a0;
- (void)tracePlayer:(id)a0 didSeekToTransportType:(int)a1;
- (void)tracePlayer:(id)a0 didSeekToTime:(double)a1 fromTime:(double)a2 location:(id)a3;
- (void)tracePlayer:(id)a0 didPlayAtTime:(double)a1;
- (void)tracePlayer:(id)a0 didJumpToRouteResponse:(id)a1 request:(id)a2 origin:(id)a3 destination:(id)a4;
- (void)tracePlayerDidStayOnRoute:(id)a0;
- (void)tracePlayer:(id)a0 didUpdateLocation:(id)a1;
- (void)tracePlayer:(id)a0 didReceiveLocationError:(id)a1;
- (void)tracePlayerDidPauseLocationUpdates:(id)a0;
- (void)tracePlayerDidResumeLocationUpdates:(id)a0;
- (void)tracePlayer:(id)a0 didUpdateHeading:(id)a1;
- (void)tracePlayer:(id)a0 didUpdateMotion:(unsigned long long)a1 exitType:(unsigned long long)a2 confidence:(unsigned long long)a3;
- (void)tracePlayer:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)tracePlayer:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)tracePlayer:(id)a0 didUpdateEVData:(id)a1;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)openForPlaybackWithTracePath:(id)a0;
- (void)openForRecordingWithTraceRecordingData:(id)a0 traceName:(id)a1 selectedRouteIndex:(unsigned long long)a2 isReconnecting:(BOOL)a3 isSimulation:(BOOL)a4;
- (void)openForSimulationWithRoute:(id)a0 traceRecordingData:(id)a1 traceNameOverride:(id)a2;

@end
