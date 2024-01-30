@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)canMergeRemoteChanges;
+ (BOOL)shouldHavePhotoLibrary;

- (void)performBlockAndWait:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void)setPhotoLibrary:(id)a0;
- (BOOL)isDatabaseCreationContext;

@end
