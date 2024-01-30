@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)shouldHavePhotoLibrary;
+ (BOOL)canMergeRemoteChanges;

- (id)photoLibrary;
- (BOOL)isDatabaseCreationContext;

@end
