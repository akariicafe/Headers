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

- (void)save:(BOOL)a0;
- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)save;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)initWithDirectory:(id)a0;
- (id)workspace;
- (void)cleanupDiagnosticCaseUsage;
- (void)cleanupDiagnosticCaseStorage;
- (void)cleanupDiagnosticCaseSummary;
- (void)cleanupUploadRecord;
- (void)removeCaseStorageWithID:(id)a0;
- (id)caseStorageAnalytics;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (id)caseUsageAnalytics;
- (id)caseSummaryAnalytics;
- (id)uploadRecordAnalytics;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (void)removeAllCaseStorages;

@end
