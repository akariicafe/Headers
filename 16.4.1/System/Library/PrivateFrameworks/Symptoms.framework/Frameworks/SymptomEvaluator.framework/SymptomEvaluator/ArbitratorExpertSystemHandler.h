@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSDictionary;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    NSDictionary *processToLengthLogCollectionMap;
    BOOL _initializationComplete;
    BOOL _observingSetupAssistantFinished;
    id _foregroundStateObserver;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (void)resetAllForCustomerBuilds;
+ (id)configureClass:(id)a0;
+ (BOOL)disableResourceNotifyDampening;

- (BOOL)noteSymptom:(id)a0;
- (id)internalStateDictionary;
- (void)alertCarrierSeedUserAboutABC;
- (void)_dumpState;
- (void)_administrativeEnable;
- (void)_removeReportRecordForKey:(id)a0;
- (void)_removeAllReportRecords;
- (void)_administrativeDisable;
- (BOOL)requireUserNotification;
- (void)_completeInitialization:(BOOL)a0;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)setupAssistantFinished;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)removeSetupAssistantFinishedObserver;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (void)_scheduleMaintenanceActivity;
- (BOOL)_arbitratorReady;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (BOOL)_initializeWorkspace;
- (void)dealloc;
- (void)_purgeDiagnosticCaseUsage;
- (void)handleAssertionExceptionTriggerWithEvent:(id)a0 signatureSubType:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)scheduleABCNotificationForCarrierSeedUser;
- (void)observeSetupAssistantFinished;
- (void)resetAll;
- (id)init;
- (void)resetDiagnosticCaseUsage;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;
- (void)_saveReportRecord:(id)a0;
- (void).cxx_destruct;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;

@end
