@interface TSPDatabaseArchiveManager : NSObject

+ (BOOL)_processDistributableArchiveEntry:(id)a0 database:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (BOOL)_processGetRelationships:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)_processLoad:(id)a0 classType:(int *)a1 database:(id)a2 fileManager:(id)a3 error:(id *)a4;
+ (BOOL)populateDistributableArchiveEntry:(id)a0 database:(id)a1 fileManager:(id)a2;

@end
