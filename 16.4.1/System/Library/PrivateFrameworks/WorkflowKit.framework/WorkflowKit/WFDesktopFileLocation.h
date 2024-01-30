@interface WFDesktopFileLocation : WFFileProviderLocation

+ (BOOL)canRepresentURL:(id)a0 item:(id)a1 parentItems:(id)a2;
+ (id)subpathFromURL:(id)a0 item:(id)a1;

- (BOOL)isSupportedOnCurrentPlatform;
- (id)resolveLocationWithError:(id *)a0;
- (BOOL)shouldShowUsersDuringDisplay:(id)a0;

@end
