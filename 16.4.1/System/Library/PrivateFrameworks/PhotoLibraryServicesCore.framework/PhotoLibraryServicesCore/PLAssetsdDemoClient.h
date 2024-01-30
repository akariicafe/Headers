@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (BOOL)cleanupForStoreDemoMode:(id *)a0;
- (void)cleanupForStoreDemoModeWithCompletion:(id /* block */)a0;
- (BOOL)hasCompletedMomentAnalysis:(BOOL *)a0 error:(id *)a1;
- (BOOL)hasCompletedRestorePostProcessing:(BOOL *)a0 error:(id *)a1;

@end
