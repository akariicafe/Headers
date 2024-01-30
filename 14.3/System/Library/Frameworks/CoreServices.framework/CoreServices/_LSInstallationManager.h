@interface _LSInstallationManager : NSObject

+ (id)sharedInstance;

- (void)install:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)uninstall:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
