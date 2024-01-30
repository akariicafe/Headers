@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    BOOL _initializationComplete;
    BOOL _observingSetupAssistantFinished;
    id _foregroundStateObserver;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (BOOL)disableResourceNotifyDampening;
+ (id)configureClass:(id)a0;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (void)resetAllForCustomerBuilds;

- (BOOL)noteSymptom:(id)a0;
- (id)internalStateDictionary;
- (void)_administrativeDisable;
- (void)_removeReportRecordForKey:(id)a0;
- (id)init;
- (void)resetAll;
- (void).cxx_destruct;
- (void)_administrativeEnable;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)_dumpState;
- (void)dealloc;
- (void)observeSetupAssistantFinished;
- (void)removeSetupAssistantFinishedObserver;
- (BOOL)_arbitratorReady;
- (void)setupAssistantFinished;
- (void)_saveReportRecord:(id)a0;
- (void)alertCarrierSeedUserAboutABC;
- (void)scheduleABCNotificationForCarrierSeedUser;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)resetDiagnosticCaseUsage;
- (void)_removeAllReportRecords;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (BOOL)_initializeWorkspace;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (void)_scheduleMaintenanceActivity;
- (BOOL)requireUserNotification;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2;
- (void)_completeInitialization:(BOOL)a0;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)_purgeDiagnosticCaseUsage;

@end
