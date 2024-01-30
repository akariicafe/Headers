@interface NSEntityMigrationPolicy : NSObject

- (BOOL)endEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (id)_nonNilValueOrDefaultValueForAttribute:(id)a0 source:(id)a1 destination:(id)a2;
- (BOOL)beginEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (BOOL)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (BOOL)createRelationshipsForDestinationInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (BOOL)endInstanceCreationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (BOOL)endRelationshipCreationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (BOOL)performCustomValidationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;

@end
