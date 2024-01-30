@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;

@interface ABCPersistentStoreController : NSObject {
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
}

@property (readonly, nonatomic) AnalyticsWorkspace *workspace;
@property (weak, nonatomic) id<ABCPersistentStoreControllerDelegate> delegate;

- (id)workspace;
- (void)save;
- (void)cleanupDiagnosticCaseSummary;
- (id)caseSummaryAnalytics;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (void)shutdown;
- (void)removeAllCaseStorages;
- (id)initWithDirectory:(id)a0;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)uploadRecordAnalytics;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)save:(BOOL)a0;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (void).cxx_destruct;
- (void)cleanupDiagnosticCaseUsage;
- (id)init;
- (void)cleanupUploadRecord;
- (void)cleanupDiagnosticCaseStorage;
- (void)removeCaseStorageWithID:(id)a0;
- (id)caseUsageAnalytics;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (id)caseStorageAnalytics;

@end
