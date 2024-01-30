@interface _LSInstallationManager : NSObject

+ (id)sharedInstance;

- (id)install:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)uninstall:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
