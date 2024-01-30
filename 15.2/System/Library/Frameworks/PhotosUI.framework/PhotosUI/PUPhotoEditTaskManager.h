@interface PUPhotoEditTaskManager : NSObject

+ (id)sharedManager;

- (id)init;
- (void)createEditableCopyForReadOnlyPhoto:(id)a0 completionHandler:(id /* block */)a1;

@end
