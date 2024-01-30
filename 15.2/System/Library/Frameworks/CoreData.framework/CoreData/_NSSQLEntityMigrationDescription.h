@class NSSQLEntity, NSMutableDictionary, NSEntityMapping, NSMutableArray;

@interface _NSSQLEntityMigrationDescription : NSObject {
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSSQLEntity *_dstEntity;
    int _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
    BOOL _updateUsingCopy;
}

@property (readonly, nonatomic) NSSQLEntity *sourceEntity;

- (id)description;
- (void)dealloc;
- (void)validateCloudKitEntityMigration;

@end
