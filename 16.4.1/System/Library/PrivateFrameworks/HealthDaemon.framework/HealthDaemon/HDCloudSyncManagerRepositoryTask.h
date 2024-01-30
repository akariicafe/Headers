@class HDXPCClient, NSArray, HDCloudSyncContext, HDCloudSyncManager;

@interface HDCloudSyncManagerRepositoryTask : HDCloudSyncManagerTask

@property (weak, nonatomic) HDCloudSyncManager *manager;
@property (copy, nonatomic) HDCloudSyncContext *context;
@property (copy, nonatomic) NSArray *repositories;
@property (retain, nonatomic) HDXPCClient *client;
@property BOOL runWhenSyncProhibited;

- (void)main;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1;
- (void)mainWithRepositories:(id)a0 error:(id)a1;

@end
