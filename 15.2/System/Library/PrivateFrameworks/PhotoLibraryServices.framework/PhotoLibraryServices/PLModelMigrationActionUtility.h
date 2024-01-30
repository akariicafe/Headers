@interface PLModelMigrationActionUtility : NSObject

+ (long long)updateExtendedAttributesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 error:(id *)a3;
+ (long long)removeOrphanedObjectsWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 error:(id *)a3;

@end
