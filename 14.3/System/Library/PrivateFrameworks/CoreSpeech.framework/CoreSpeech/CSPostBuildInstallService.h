@interface CSPostBuildInstallService : NSObject

+ (id)sharedService;

- (void)registerPostBuildInstallService;
- (void)_performPostBuildInstallWithCompletion:(id /* block */)a0;

@end
