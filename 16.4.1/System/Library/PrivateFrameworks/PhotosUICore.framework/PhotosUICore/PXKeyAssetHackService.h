@interface PXKeyAssetHackService : PXDiagnosticsService

+ (BOOL)keyAssetHackServiceIsEnabled;

- (void)performAction;
- (id)asset;
- (id)title;
- (BOOL)canPerformAction;
- (BOOL)shouldSetKeyAssetForHighlight:(id)a0;

@end
