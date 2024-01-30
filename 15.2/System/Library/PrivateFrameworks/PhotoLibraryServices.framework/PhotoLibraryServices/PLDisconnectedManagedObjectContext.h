@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)canMergeRemoteChanges;
+ (BOOL)shouldHavePhotoLibrary;

- (id)photoLibrary;
- (BOOL)isDatabaseCreationContext;

@end
