@interface CSPostBuildInstallService : NSObject

+ (id)sharedService;

- (void)_performPostBuildInstallWithCompletion:(id /* block */)a0;
- (void)registerPostBuildInstallService;

@end
