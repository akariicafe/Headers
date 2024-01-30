@class NSSQLEntity, NSMutableDictionary, NSMutableSet, NSMutableArray, NSNumber;

@interface _NSSQLTableMigrationDescription : NSObject {
    NSSQLEntity *_sourceRootEntity;
    int _migrationType;
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_copiedEntityMigrations;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableDictionary *_migrationByEntity;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableDictionary *_tempTableNames;
    NSNumber *_hasComplexSchemaTransformations;
    NSMutableSet *_addedColumnSet;
    NSMutableSet *_renamedTableSet;
    NSMutableSet *_renamedColumnSet;
    NSMutableSet *_renamedMTMSet;
    NSMutableSet *_raisedColumnSet;
    NSMutableSet *_droppedEntitySet;
    NSMutableSet *_collapsedEntitySet;
    NSMutableSet *_columnsUpgradedToMandatory;
    NSMutableSet *_delayedDropColumnSet;
}

@property (readonly, nonatomic) NSSQLEntity *rootEntity;

- (id)description;
- (void)dealloc;

@end
