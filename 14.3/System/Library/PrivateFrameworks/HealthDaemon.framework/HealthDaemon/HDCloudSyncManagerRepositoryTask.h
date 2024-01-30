@class HDCloudSyncManager, HDCloudSyncContext, NSArray;

@interface HDCloudSyncManagerRepositoryTask : HDCloudSyncManagerTask

@property (weak, nonatomic) HDCloudSyncManager *manager;
@property (copy, nonatomic) HDCloudSyncContext *context;
@property (copy, nonatomic) NSArray *repositories;
@property BOOL runWhenSyncProhibited;

- (void).cxx_destruct;
- (void)main;
- (id)initWithManager:(id)a0 context:(id)a1;
- (void)mainWithRepositories:(id)a0 error:(id)a1;

@end
