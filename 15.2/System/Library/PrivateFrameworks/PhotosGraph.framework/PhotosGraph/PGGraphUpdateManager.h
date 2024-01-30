@class NSDate, PGManager, NSString, PGGraphUpdateJetsamIndicator, PGPhotoChangeToGraphChangeConverter, PGLibraryChangeListener, PGGraphUpdateManagerTargetTokenState, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGGraphUpdateManager : NSObject <PGLibraryChangeConsumer>

@property (retain, nonatomic) PGLibraryChangeListener *libraryChangeListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) PGPhotoChangeToGraphChangeConverter *changeConverter;
@property (nonatomic) unsigned char processingState;
@property (retain, nonatomic) NSMutableArray *pendingChanges;
@property (nonatomic, getter=isListening) BOOL listening;
@property (nonatomic) BOOL stopRequested;
@property (retain, nonatomic) PGGraphUpdateManagerTargetTokenState *targetTokenState;
@property (readonly, nonatomic) NSMutableSet *listeners;
@property (readonly, nonatomic) PGGraphUpdateJetsamIndicator *jetsamIndicator;
@property (readonly, nonatomic) id<PGGraphUpdateHealthRecording> updateHealthRecorder;
@property (readonly, nonatomic) NSDate *dateSinceMajorUpgrade;
@property (readonly, nonatomic) BOOL isConsistencyUpdate;
@property (readonly, nonatomic) PGManager *manager;
@property long long executionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (BOOL)startListening;
- (id)initWithGraphManager:(id)a0;
- (void)removeListener:(id)a0;
- (void)_processPendingChanges;
- (void)addListener:(id)a0;
- (void).cxx_destruct;
- (BOOL)_startListening;
- (void)libraryChangesAvailable:(id)a0;
- (void)incrementalChangeNotAvailable;
- (void)performLightWeightRebuildWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)performFullRebuildWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)_performRebuildWithGraphIngestRecipe:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_onStopRequestedWasListening:(BOOL)a0;
- (void)_signalGraphIsConsistentWithTokens:(id)a0;
- (void)_onEncounteredTargetToken;
- (void)_notifyListeners:(id)a0 notificationType:(unsigned char)a1;
- (void)_notifyProgress:(double)a0;
- (BOOL)_pauseListening;
- (id)_tokensForChanges:(id)a0;
- (void)_processRebuild;
- (void)_onFinishedProcessingChangesWithTokens:(id)a0;
- (void)_triggerFullRebuildDuringLiveUpdate:(BOOL)a0 graphIngestRecipe:(id)a1 progressBlock:(id /* block */)a2 keepExistingGraph:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)_triggerUpdateForGraphUpdate:(id)a0;
- (BOOL)_performEnrichmentWithGraphUpdateInventory:(id)a0 enrichmentContext:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (id)_graphUpdateForPhotoChanges:(id)a0;
- (void)_recordInformationFromDatabaseChange:(id)a0;
- (void)_recordInformationFromGraphChanges:(id)a0;
- (void)_recordNumberOfDaysSinceMajorOSUpgradeIfNeeded;

@end
