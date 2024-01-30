@class WFDatabase, NSXPCConnection;

@interface WFDatabaseProxy : NSObject

@property (class, retain, nonatomic) WFDatabaseProxy *defaultDatabase;

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) NSXPCConnection *databaseProxyHostConnection;

- (id)initWithDatabase:(id)a0;
- (BOOL)saveSmartPromptStateData:(id)a0 actionUUID:(id)a1 reference:(id)a2 error:(id *)a3;
- (void)setTrustedToRunScripts:(BOOL)a0 forReference:(id)a1 onDomain:(id)a2;
- (id)referenceForWorkflowID:(id)a0;
- (id)uniqueVisibleReferenceForWorkflowName:(id)a0;
- (BOOL)isReference:(id)a0 allowedToRunOnDomain:(id)a1;
- (void).cxx_destruct;
- (id)sortedWorkflowsWithQuery:(id)a0 error:(id *)a1;
- (id)collectionWithIdentifier:(id)a0 error:(id *)a1;
- (id)approvalResultForContentAttributionSet:(id)a0 contentDestination:(id)a1 actionUUID:(id)a2 actionIdentifier:(id)a3 actionIndex:(unsigned long long)a4 reference:(id)a5 allowedOnceStates:(id)a6 error:(id *)a7;
- (id)configuredTriggersForWorkflowID:(id)a0 error:(id *)a1;
- (id)createWorkflowWithWorkflowRecord:(id)a0 nameCollisionBehavior:(unsigned long long)a1 error:(id *)a2;
- (id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)a0 actionUUID:(id)a1 actionIdentifier:(id)a2 actionIndex:(unsigned long long)a3 count:(unsigned long long)a4 reference:(id)a5 error:(id *)a6;
- (id)folderForWorkflowReference:(id)a0 error:(id *)a1;
- (id)hostProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 databaseProxyHost:(id)a1;
- (id)initWithDatabaseProxyHost:(id)a0;
- (id)sortedVisibleFoldersWithError:(id *)a0;
- (id)sortedVisibleWorkflowsByNameWithError:(id *)a0;
- (id)sortedVisibleWorkflowsInCollection:(id)a0 error:(id *)a1;
- (void)updateAppDescriptor:(id)a0 atKey:(id)a1 actionUUID:(id)a2 actionIndex:(id)a3 actionIdentifier:(id)a4 workflowID:(id)a5 error:(id *)a6;
- (id)workflowRecordForWorkflowReference:(id)a0 error:(id *)a1;

@end
