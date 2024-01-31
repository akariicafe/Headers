@class NSPersistentContainer, NSArray;

@interface NSStagedMigrationManager : NSObject

@property (retain) NSPersistentContainer *container;
@property (readonly) NSArray *stages;

- (void)dealloc;
- (long long)_findCurrentMigrationStageFromModelChecksum:(id)a0;
- (BOOL)_shouldAttemptStagedMigrationWithStoreModelVersionChecksum:(id)a0 coordinatorModelVersionChecksum:(id)a1 error:(id *)a2;
- (id)initWithMigrationStages:(id)a0;

@end
