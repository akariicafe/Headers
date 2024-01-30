@class NSString, AnalyticsWorkspace, NSMutableDictionary, ImpoExpoService, NSMutableSet, NSObject, ObjectAnalytics, NSNotificationCenter, SFCache;
@protocol OS_dispatch_queue;

@interface NetDomainsHandler : NSObject <UMUserSwitchStakeholder, ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSNotificationCenter *_notificationCenter;
    BOOL _observingSystemSettingsRelay;
    BOOL _observingConsoleUser;
    id _engineReadyObserver;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    ObjectAnalytics *trackerDomainSpace;
    unsigned long long _adminState;
    BOOL _okToTriggerAutoBugCapture;
    NSMutableSet *_previouslyAcceptedAppleAppCases;
    BOOL _defaultSwitchState;
    BOOL _hasSomeUserEnabled;
    NSMutableDictionary *_userIDsSwitchStates;
    BOOL _defaultReconciliationSwitchState;
    BOOL _hasCurrentUserReconciliationEnabled;
    NSMutableDictionary *_userIDsReconciliationSwitchStates;
    SFCache *_bundleIdentifierCache;
    unsigned long long _symptomCombinationTypeCounts[6];
    unsigned long long _dnsSymptomWithDomainCount;
    BOOL _isUserSwitchStakeholder;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)_completeInitialization;
- (int)read:(id)a0 returnedValues:(id)a1;
- (int)configureInstance:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (void)_postSwitchStateNotificationForName:(id)a0;
- (BOOL)_hasSomeUserEnabled;
- (BOOL)_currentReconciliationSwitchStateForUser:(unsigned int)a0 since:(id *)a1;
- (void)_administrativeDisable;
- (id)setNetworkDomainsOptions:(id)a0 service:(id)a1 connection:(id)a2;
- (void)_resetSymptomDomainStatistics;
- (void)_firstUserEnabling;
- (void)_registerForUserSwitchStakeholder;
- (id)_internalStateDictionary;
- (void)_resetSymptomCombinationBreakdown;
- (id)getNetworkDomainsOptions:(id)a0 service:(id)a1 connection:(id)a2;
- (void)savePreferencesDictionary:(id)a0 withKey:(struct __CFString { } *)a1;
- (BOOL)getReconciliationStateForUser:(unsigned int)a0;
- (void)_submitSymptomCombinationBreakdown;
- (BOOL)triggerAutoBugCaptureCaseForType:(id)a0 subType:(id)a1 privateSubtypeContext:(id)a2 detectedProcess:(id)a3 events:(id)a4 thresholdValuesString:(id)a5;
- (void)setSwitchState:(BOOL)a0 forUser:(unsigned int)a1;
- (void)_submitAppTrackingEnabled;
- (void)_sendInternalSymptomDNSResolvingEnable:(BOOL)a0;
- (BOOL)_convertNSData:(id)a0 toAuditToken:(struct { unsigned int x0[8]; } *)a1;
- (void).cxx_destruct;
- (id)_bundleNameFromAuditTokenData:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 orMachOUUID:(id)a2;
- (id)initTestInstance;
- (void)privacyReset;
- (id)init;
- (void)_lastEnabledUserDisabling;
- (void)_processEngineReadyNotification:(id)a0;
- (BOOL)bundleNameImplies1stOr2ndParty:(id)a0;
- (void)_submitSymptomDomainStatistics;
- (void)_administrativeEnable;
- (void)_postNotificationForResolutionBy:(unsigned int)a0 bundleIdentifier:(id)a1 forDomain:(id)a2 endpoints:(id)a3;
- (BOOL)hasCurrentUserReconciliationEnabled;
- (void)_unregisterForUserSwitchStakeholder:(id)a0;
- (id)retrievePreferencesDictionaryWithKey:(struct __CFString { } *)a0;
- (void)willSwitchUser;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateReconciliationSwitchStatesForUser:(unsigned int)a0;
- (void)checkForAutoBugCaptureWorthyCase:(id)a0 domainName:(id)a1 initiatedType:(unsigned int)a2;
- (void)dealloc;
- (void)logSwitchStatesFromDictionary:(id)a0;
- (void)performPeriodicTasks;
- (BOOL)_currentSwitchStateForUser:(unsigned int)a0 since:(id *)a1;
- (void)setReconciliationSwitchState:(BOOL)a0 forUser:(unsigned int)a1;

@end
