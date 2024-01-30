@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (void)cleanupForStoreDemoMode;
- (BOOL)hasCompletedRestorePostProcessing:(BOOL *)a0 error:(id *)a1;
- (BOOL)hasCompletedMomentAnalysis:(BOOL *)a0 error:(id *)a1;

@end
