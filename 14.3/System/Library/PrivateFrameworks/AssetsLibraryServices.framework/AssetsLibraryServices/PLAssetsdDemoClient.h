@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (void)cleanupForStoreDemoMode;
- (BOOL)hasCompletedMomentAnalysis:(BOOL *)a0 error:(id *)a1;
- (BOOL)hasCompletedRestorePostProcessing:(BOOL *)a0 error:(id *)a1;

@end
