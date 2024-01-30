@interface PLManagedObjectValidator : NSObject

+ (id)validateManagedObject:(id)a0;
+ (BOOL)validateAllObjectsWithEntityClass:(Class)a0 inManagedObjectContext:(id)a1 resultHandler:(id /* block */)a2;
+ (BOOL)validateAllObjectsUsingManagedObjectContext:(id)a0 resultHandler:(id /* block */)a1;
+ (id)_entityClassesToValidate;

@end
