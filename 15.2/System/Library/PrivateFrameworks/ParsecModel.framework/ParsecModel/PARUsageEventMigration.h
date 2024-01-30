@interface PARUsageEventMigration : NSEntityMigrationPolicy

- (void).cxx_destruct;
- (id)init;
- (BOOL)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;

@end
