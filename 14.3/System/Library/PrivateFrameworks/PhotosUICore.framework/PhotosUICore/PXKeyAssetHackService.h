@interface PXKeyAssetHackService : PXDiagnosticsService

+ (BOOL)keyAssetHackServiceIsEnabled;

- (void)performAction;
- (id)asset;
- (BOOL)canPerformAction;
- (BOOL)shouldSetKeyAssetForHighlight:(id)a0;
- (id)title;

@end
