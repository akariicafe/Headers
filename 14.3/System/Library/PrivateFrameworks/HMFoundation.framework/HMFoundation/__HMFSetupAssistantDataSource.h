@class NSString;
@protocol HMFSystemInfoMigrationDataSourceDelegate;

@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource>

@property (weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate;
@property (readonly, nonatomic, getter=isMigrating) BOOL migrating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
