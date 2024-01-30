@protocol VCCKSyncEngineDataSource;

@interface VCCKSyncEngine : CKSyncEngine

@property (readonly, weak, nonatomic) id<VCCKSyncEngineDataSource> dataSource;

- (void)didReceiveDatabaseNotification:(id)a0;

@end
