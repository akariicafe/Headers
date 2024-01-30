@class GEOLocationShifter, NSNumber, NSArray, CAMLibrarySelectionSession, NSString, NSMutableSet, NSObject, CLLocation, PHCameraSmartSharingMetadata, CAMLibrarySelectionSignalResult;
@protocol OS_dispatch_queue, CAMLibrarySelectionLocationProvider, CAMPeopleProximityControllerProtocol;

@interface CAMLibrarySelectionController : NSObject <CAMLocationControllerListener, CAMPeopleProximityDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (retain, nonatomic) NSMutableSet *_resultQueue_identitiesInProximity;
@property (retain, nonatomic) CLLocation *_resultQueue_currentLocation;
@property (nonatomic) int _resultQueue_authorizationStatus;
@property (retain, nonatomic) PHCameraSmartSharingMetadata *_resultQueue_smartSharingMetadata;
@property (retain, nonatomic) NSNumber *_resultQueue_needsLocationShifting;
@property (retain, nonatomic) GEOLocationShifter *_resultQueue_locationShifter;
@property (retain, nonatomic) id<CAMLibrarySelectionLocationProvider> locationProvider;
@property (retain, nonatomic) CAMLibrarySelectionSignalResult *acquiredSignalResults;
@property (nonatomic) BOOL peopleProximityDetectionSupported;
@property (copy, nonatomic) id /* block */ ppt_changeHandler;
@property (retain, nonatomic) id<CAMPeopleProximityControllerProtocol> proximityController;
@property (retain, nonatomic) Class smartSharingMetadataProvider;
@property (retain, nonatomic) CAMLibrarySelectionSession *session;
@property (copy, nonatomic) NSArray *identitiesToScan;
@property (readonly, nonatomic) long long sharedLibraryMode;
@property (readonly, nonatomic) long long sharedLibraryInitialMode;
@property (readonly, nonatomic) long long userInteractionsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ppt_installChangeHandler:(id /* block */)a0;
- (void)_resultQueue_updateAcquiredSignalResults;
- (void)userDidPickSharedLibraryMode:(long long)a0;
- (void)_ppt_callChangeHandler;
- (void)stopAcquiringSignals;
- (void)_stopAcquiringSignalsAndClear:(BOOL)a0;
- (void)_resultQueue_shiftCoordinatesForLocation:(id)a0;
- (void)stopAndClearAcquiredSignals;
- (void)authorizationStatusUpdated:(int)a0;
- (void)currentLocationUpdated:(id)a0;
- (id)initWithLocationProvider:(id)a0;
- (void)setDelegate:(id)a0;
- (id)librarySelectionDiagnostics;
- (void)_resultQueue_currentLocationUpdatedAndShiftedIfNeeded:(id)a0;
- (void)_resultQueue_stopDiscovery;
- (id)_retrieveMetadata;
- (void)_ensureProximityController;
- (void)startNewSession;
- (void)_resultQueue_clearAcquiredSignals;
- (id)listeningQueue;
- (void)_resultQueue_startDiscovery;
- (void)didDiscoverIdentity:(id)a0;
- (void)didLoseIdentity:(id)a0;
- (void)startAcquiringSignals;
- (void)_newSessionWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_diagnosticsForLocation:(id)a0 currentLocation:(id)a1;
- (BOOL)_resultQueue_needsLocationShiftingForLocation:(id)a0;
- (id)tapToRadarAlertController;

@end
