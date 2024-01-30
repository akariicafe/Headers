@interface WFManagedObjectContext : NSManagedObjectContext

- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void)logFaultForIncompatibleSortDescriptorsInFetchRequest:(id)a0;

@end
