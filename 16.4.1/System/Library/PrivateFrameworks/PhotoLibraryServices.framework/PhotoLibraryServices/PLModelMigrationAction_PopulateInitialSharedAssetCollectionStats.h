@class NSProgress, NSString;

@interface PLModelMigrationAction_PopulateInitialSharedAssetCollectionStats : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_recalculateSharedAssetContainerValuesForEntityNamed:(id)a0 propertiesToFetch:(id)a1 inContext:(id)a2 error:(id *)a3;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
