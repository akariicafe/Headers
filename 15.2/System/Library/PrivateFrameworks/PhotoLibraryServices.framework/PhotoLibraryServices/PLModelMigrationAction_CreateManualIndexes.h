@class NSProgress, NSString;

@interface PLModelMigrationAction_CreateManualIndexes : PLModelMigrationActionPreRepair <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)createManualIndexesDropBeforeCreate:(BOOL)a0 pathManager:(id)a1;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
