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
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)workspace;
- (void)cleanupUploadRecord;
- (void)shutdown;
- (void)save;
- (void)cleanupDiagnosticCaseSummary;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)cleanupDiagnosticCaseUsage;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (id)initWithDirectory:(id)a0;
- (id)uploadRecordAnalytics;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)caseUsageAnalytics;
- (id)init;
- (void)cleanupDiagnosticCaseStorage;
- (id)caseStorageAnalytics;
- (id)caseSummaryAnalytics;
- (void)removeCaseStorageWithID:(id)a0;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (void).cxx_destruct;
- (void)removeAllCaseStorages;

@end
