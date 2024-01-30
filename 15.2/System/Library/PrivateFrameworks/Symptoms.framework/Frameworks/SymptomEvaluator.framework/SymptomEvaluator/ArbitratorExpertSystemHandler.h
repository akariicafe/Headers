@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSDictionary;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    NSDictionary *processToProcessesLogCollectionMap;
    NSDictionary *processToLengthLogCollectionMap;
    BOOL _initializationComplete;
    BOOL _observingSetupAssistantFinished;
    id _foregroundStateObserver;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (BOOL)disableResourceNotifyDampening;
+ (id)configureClass:(id)a0;
+ (void)resetAllForCustomerBuilds;

- (void)observeSetupAssistantFinished;
- (BOOL)noteSymptom:(id)a0;
- (void)setupAssistantFinished;
- (void)_saveReportRecord:(id)a0;
- (BOOL)_initializeWorkspace;
- (void)_dumpState;
- (void)_administrativeDisable;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)_purgeDiagnosticCaseUsage;
- (BOOL)_arbitratorReady;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (void)_completeInitialization:(BOOL)a0;
- (void)_removeReportRecordForKey:(id)a0;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (void)resetDiagnosticCaseUsage;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (void)resetAll;
- (id)internalStateDictionary;
- (void).cxx_destruct;
- (void)_scheduleMaintenanceActivity;
- (void)alertCarrierSeedUserAboutABC;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (id)init;
- (void)_administrativeEnable;
- (void)removeSetupAssistantFinishedObserver;
- (BOOL)requireUserNotification;
- (void)scheduleABCNotificationForCarrierSeedUser;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeAllReportRecords;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (void)dealloc;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;

@end
