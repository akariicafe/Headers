@interface PXKeyAssetHackService : PXDiagnosticsService

+ (BOOL)keyAssetHackServiceIsEnabled;

- (BOOL)canPerformAction;
- (id)title;
- (id)asset;
- (void)performAction;
- (BOOL)shouldSetKeyAssetForHighlight:(id)a0;

@end
