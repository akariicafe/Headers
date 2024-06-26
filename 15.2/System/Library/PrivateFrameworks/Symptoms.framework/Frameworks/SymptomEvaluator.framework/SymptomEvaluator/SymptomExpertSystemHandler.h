@class NSNumber, CoreTelephonyShim, SDRDiagnosticReporter, NSMutableArray, PowerStateRelay, NSString, NSMutableSet, SymptomExpertSystemState, SystemSettingsRelay, MotionStateRelay, NSArray, NSMutableDictionary, CLIPSShim, NSObject, CellFallbackHandler, SystemProperties, SymptomsFileCleaner, NSXPCConnection, AnalyticsConfigurationObserver, NSDate, NetworkAnalyticsStateRelay, ProbeManager, NSDataDetector;
@protocol OS_dispatch_source;

@interface SymptomExpertSystemHandler : ExpertSystemHandlerCore <ProbeManagerDelegate, CLIPSShimDelegate, SymptomsFileCleanerDelegate, SymptomsAWDObserverDelegate, AnalyticsConfigurationObserverDelegate, CoreTelephonyShimDelegate> {
    NSMutableDictionary *_interfaceNameToType;
    SymptomExpertSystemState *currentState;
    NSArray *states;
    id relayReadyObserver;
    SystemSettingsRelay *settingsRelay;
    PowerStateRelay *powerRelay;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    CellFallbackHandler *rnfRelay;
    SystemProperties *systemPropsRelay;
    unsigned int administrativeState;
    unsigned int relayObservingState;
    NSMutableDictionary *relayToFacts;
    NSDate *lastWiFiAssociationTime;
    CoreTelephonyShim *ctShim;
    MotionStateRelay *motionRelay;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } coreTelephonyRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } wifiRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } wifiScalarRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } cellRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } cellScalarRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } systemRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } systemScalarRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } systemSymptomRelayContext;
    struct { char *relayName; BOOL symptomLike; BOOL scalarValues; } hardwareRelayContext;
    NSString *_airdropID;
    unsigned long long _asyncKVOCount;
    BOOL _pendingEngineRun;
    CLIPSShim *ruleEngine;
    BOOL _loadedCLIPSRulesAndFacts;
    BOOL _failedToLoadDefaultRules;
    BOOL _didScheduleCleanupTask;
    NSString *_pendingOTACLIPSUpdate;
    NSString *_pendingOTACLIPSUpdateVersion;
    NSString *_pendingOTACLIPSUpdateModule;
    NSMutableDictionary *_pendingOTACLIPSUpdates;
    unsigned long long idsNoteMessageCount;
    NSDate *idsNoteMessageLastCLIPSIngestible;
    BOOL _observingAutoBugCaptureEnabled;
    BOOL _observingAutoFeedbackAssistantEnabled;
    BOOL _observingInstalledVisibleProfiles;
}

@property unsigned long long stepper;
@property (retain, nonatomic) NSMutableArray *incomingSymptoms;
@property (retain, nonatomic) NSMutableArray *processedSymptoms;
@property (retain, nonatomic) NSString *diagnosticSessionIdentifier;
@property (retain, nonatomic) NSMutableArray *caseSignatures;
@property (retain, nonatomic) NSMutableDictionary *diagnosticSessionOutput;
@property (retain, nonatomic) NSDate *lastSymptomRun;
@property (retain, nonatomic) NSMutableDictionary *obfuscations;
@property (retain, nonatomic) NSDataDetector *urlDetector;
@property (retain, nonatomic) NSDate *diagSessionExpectedEnd;
@property (nonatomic) long long diagnosingStrobeInterval;
@property (nonatomic) long long maximumDiagnosingTime;
@property (nonatomic) BOOL observingAWDMetrics;
@property (retain, nonatomic) AnalyticsConfigurationObserver *analyticsConfigObserver;
@property (retain, nonatomic) NSMutableDictionary *awdCLIPSMapping;
@property (retain, nonatomic) NSMutableArray *awdCLIPSModules;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clipsReleaseMemoryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clipsResetTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clipsAWDObserverTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *loadDefaultRulesTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *loggingProfileTimeoutTimer;
@property (retain, nonatomic) NSMutableDictionary *clipsFactsWaitTimers;
@property (retain, nonatomic) ProbeManager *probeManager;
@property (retain, nonatomic) NSDate *completedInitializationDate;
@property (retain, nonatomic) SDRDiagnosticReporter *sdrReporter;
@property (retain, nonatomic) NSXPCConnection *privateConnection;
@property (retain, nonatomic) SymptomsFileCleaner *abcCleaner;
@property (retain, nonatomic) NSNumber *apSleep;
@property (nonatomic) BOOL internalBuild;
@property (nonatomic) BOOL carrierSeedBuild;
@property (nonatomic) BOOL internalOrCarrierSeedBuild;
@property (nonatomic) BOOL customerSeedBuild;
@property (nonatomic) BOOL vendorBuild;
@property (retain, nonatomic) NSMutableDictionary *libtraceOSLogWhiteList;
@property (retain, nonatomic) NSString *activeDataSIMOperatorName;
@property (retain, nonatomic) NSString *lastActiveDataSIMOperatorName;
@property (nonatomic) unsigned long long activeDataSIMSignalBars;
@property (nonatomic) unsigned long long lastActiveDataSIMSignalBars;
@property (retain, nonatomic) NSMutableSet *filteredCTDumps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)noteSymptom:(id)a0;
+ (id)libtraceInfo:(id)a0;
+ (BOOL)parseEndpoint:(id)a0 intoURL:(id *)a1 host:(id *)a2 scheme:(id *)a3 path:(id *)a4;
+ (id)internalStateDictionary;
+ (id)configureClass:(id)a0;

- (void)_completeInitialization;
- (void)setDefaultFacts;
- (BOOL)noteSymptom:(id)a0;
- (void)_bringStateToIdle;
- (void)logSessionEventMessage:(id)a0;
- (id)getOperatorName;
- (void)signalStrengthChangedForSubscription:(id)a0;
- (void)checkObfuscationsInAllCaseSignatures;
- (void)_processSymptomsdFlowCountExceededThreshold:(id)a0 symptomName:(id)a1;
- (void)_processSymptomsdExcessiveFailedConnections:(id)a0 symptomName:(id)a1;
- (void)processIncomingOTAUpdate:(id)a0;
- (void)_processSymptomsdEnergyBackgroundRRCExcActivity:(id)a0 symptomName:(id)a1;
- (void)retractService:(id)a0 type:(long long)a1;
- (void)endDiagnosticSession:(id)a0;
- (void)_dumpState;
- (void)_administrativeDisable;
- (void *)assertFactString:(id)a0 moduleName:(id)a1 run:(BOOL)a2;
- (BOOL)didInstallProfileForKey:(id)a0;
- (void)retractFacts:(id)a0 runAfterLastFact:(BOOL)a1;
- (void)startDiagnosticSessionWithDomain:(id)a0 type:(id)a1 subType:(id)a2 subTypeContext:(id)a3 processID:(id)a4 processName:(id)a5 bundleID:(id)a6 interfaceType:(id)a7 threshold:(id)a8 sessionDuration:(id)a9;
- (void)probeFactString:(id)a0 module:(id)a1 goIntoDiagnosing:(BOOL)a2 run:(BOOL)a3;
- (void)cancelAllWaitingForFactTimers;
- (void)registerAllCLIPSCallbacks;
- (id)primaryComponent:(id)a0 obfuscationType:(id)a1;
- (BOOL)urlIsAppleDomain:(id)a0;
- (void)_processSymptomsdNoDefaultRoute:(id)a0 symptomName:(id)a1;
- (void)probeOutputFilePaths:(id)a0 forDiagSessionUUID:(id)a1;
- (void)stopAWDObserving:(id /* block */)a0;
- (id)deParamsDictForDiagnosticExtension:(id)a0 withDEParams:(id)a1;
- (void)_processAnomalousFlowSymptom:(id)a0 symptomName:(id)a1 categoryType:(id)a2;
- (void)_processSymptomsdMbufPeak:(id)a0 symptomName:(id)a1;
- (void)probeStatusUpdate:(id)a0;
- (void)unloadAWDObservedModules;
- (id)obfuscatedEndpoint:(id)a0;
- (void)_removeExternalRelayObservers;
- (void)startDiagnosticSessionWithDomain:(id)a0 type:(id)a1 subType:(id)a2 subTypeContext:(id)a3 processID:(id)a4 processName:(id)a5 bundleID:(id)a6 interfaceType:(id)a7 threshold:(id)a8 sessionDuration:(id)a9 triggerRemoteCase:(id)a10;
- (BOOL)loadModule:(id)a0 requiresBasebandModule:(BOOL)a1;
- (id)obfuscatedPrimaryComponent:(id)a0 obfuscationType:(id)a1;
- (void)_configdSymptom:(id)a0;
- (void)_processUIPerformanceThunderingHerdCase:(id)a0 symptomName:(id)a1;
- (void)startLoadDefaultRulesTimer:(double)a0;
- (void)logSessionEventProbe:(id)a0 endpoint:(id)a1 interface:(id)a2 status:(id)a3;
- (id)obfuscatedSubcomponent:(id)a0 fromPrimaryEntry:(id)a1 withKey:(id)a2 obfuscation:(id)a3;
- (void)startAWDObserverTimer;
- (void)setValue:(id)a0 forKey:(id)a1 toEBFProfiles:(id)a2;
- (void)_processSymptomsdEnergyBackgroundFullActivityMap:(id)a0 symptomName:(id)a1;
- (void)_bringStateToRunning;
- (id)getSignalBars;
- (void)snapshotDiagnosticSessionWithDomain:(id)a0 type:(id)a1 subType:(id)a2 subTypeContext:(id)a3 processID:(id)a4 processName:(id)a5 bundleID:(id)a6 interfaceType:(id)a7 threshold:(id)a8 sessionDuration:(id)a9;
- (void)retractFact:(void *)a0 moduleName:(id)a1 run:(BOOL)a2;
- (void)handleEvent:(id)a0;
- (id)awdObserveModule:(id)a0 requiredModules:(id)a1 unloadModule:(id)a2;
- (void)_addAllObservers;
- (void)processRelayStateChange:(id)a0 key:(id)a1 relay:(id)a2 scalar:(BOOL)a3;
- (id)symptomDictionaryForSymptom:(id)a0 domain:(id)a1 type:(id)a2;
- (void)fileCleanupComplete;
- (id)pendingOTACLIPSUpdates;
- (void)assertFactAndRun:(id)a0 module:(id)a1 reply:(id /* block */)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfValueForSlotName:(id)a0 in:(id)a1;
- (void)_symptomsdSymptom:(id)a0;
- (void)resetPreviousObfuscations;
- (id)serviceToFactString:(id)a0 type:(long long)a1;
- (id)internalStateDictionary;
- (void)cancelWaitForFactWithTemplateName:(id)a0;
- (void).cxx_destruct;
- (void)observer:(id)a0 didChangeConfiguration:(id)a1 type:(id)a2;
- (BOOL)postAWDEvent:(id)a0;
- (id)init;
- (void)requestCoreTelephonyDumpViaDiagnosticExtension:(id)a0 folderPrefix:(id)a1 dumpReason:(id)a2 resetBaseband:(id)a3;
- (void)operatorNameChangedForSubscription:(id)a0;
- (BOOL)loadDefaultRules;
- (void)serviceAdded:(id)a0 type:(long long)a1;
- (void)_processLibnetcoreSymptom:(id)a0 symptomName:(id)a1;
- (void)logSessionEventSymptom:(id)a0 process:(id)a1 endpoint:(id)a2 interface:(id)a3;
- (void)processWiFiAssociationChange:(BOOL)a0 atTime:(id)a1;
- (void)deactivateModule:(id)a0;
- (void)_libtraceOSLog:(id)a0;
- (void)runEngine;
- (id)interfaceTypeForName:(id)a0;
- (void)_administrativeEnable;
- (void)serviceUpdated:(id)a0 type:(long long)a1;
- (void)_airplaySymptom:(id)a0;
- (void)assertRelayFact:(id)a0 forRelayKey:(id)a1 moduleName:(id)a2;
- (void)_performSeedCleanup;
- (void)_usageUpdaterSymptom:(id)a0;
- (void)unloadModule:(id)a0;
- (BOOL)isAWDEventEligibleForCLIPSIngestion:(id)a0;
- (void)_libnetcoreSymptom:(id)a0;
- (void)_processSymptomsdRnfSymptom:(id)a0 symptomName:(id)a1 categoryType:(id)a2;
- (void)cancelDiagnosticSession:(id)a0;
- (void)onDisruptiveFlowChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)arbitratorDictionaryForSymptom:(id)a0 procName:(id)a1 interfaceType:(id)a2 eventCount:(id)a3 duration:(id)a4;
- (void)clipsConsoleOutput:(id)a0 consoleChannel:(const char *)a1 forEngine:(id)a2;
- (void)releaseAllRelayFacts;
- (void)dealloc;
- (void)_addExternalRelayObservers;
- (void)serviceRemoved:(id)a0 type:(long long)a1;
- (void)coreTelephonyDumpCompletedTo:(id)a0 folderPrefix:(id)a1;
- (void)waitForFactWithTemplateName:(id)a0 module:(id)a1 timeout:(id)a2;
- (void)fetchCoreTelephonyLoggingEnabledStatus;
- (id)getBatteryPercentage:(id)a0;
- (void)coreTelephonyDumpStartedTo:(id)a0 folderPrefix:(id)a1 gotFilteredOut:(BOOL)a2;
- (void)ingestPendingOTAUpdates;
- (void)_bringStateToDiagnosing;
- (void)addDiagnosticSession:(id)a0 hasDictionary:(id)a1 endSession:(id)a2;
- (void)assertFactAsSymptom:(id)a0 module:(id)a1;
- (id)symptomsAWDObserver;
- (void)sendCaseSignaturesToSDRWithSessionID:(id)a0;
- (void)adjustStrobeTimerInterval:(id)a0 maximum:(id)a1;
- (void)startAWDObserving:(id)a0;
- (void)_removeAllObservers;
- (id)awdCLIPSModuleDictForModule:(id)a0;
- (void)_removeDebuggabilityFolder;
- (void)_processSymptomsdWiFiShimSymptom:(id)a0 symptomName:(id)a1;

@end
