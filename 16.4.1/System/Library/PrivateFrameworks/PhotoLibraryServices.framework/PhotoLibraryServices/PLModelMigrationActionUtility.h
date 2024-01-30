@interface PLModelMigrationActionUtility : NSObject

+ (long long)removeFromDuplicatesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 requiresTokenReset:(BOOL)a3 error:(id *)a4;
+ (long long)removeOrphanedObjectsWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 error:(id *)a3;
+ (long long)resetDuplicateProcessingWithAction:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (long long)updateExtendedAttributesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 useObjectIDResumeMarker:(BOOL)a3 error:(id *)a4;

@end
