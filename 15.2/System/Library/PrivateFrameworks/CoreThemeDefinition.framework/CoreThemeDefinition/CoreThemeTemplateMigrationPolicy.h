@interface CoreThemeTemplateMigrationPolicy : NSEntityMigrationPolicy

- (BOOL)beginEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (BOOL)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (BOOL)createRelationshipsForDestinationInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (BOOL)performCustomValidationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;

@end
