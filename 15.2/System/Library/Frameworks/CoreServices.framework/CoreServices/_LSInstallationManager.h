@interface _LSInstallationManager : NSObject

+ (id)sharedInstance;

- (id)uninstall:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)install:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
