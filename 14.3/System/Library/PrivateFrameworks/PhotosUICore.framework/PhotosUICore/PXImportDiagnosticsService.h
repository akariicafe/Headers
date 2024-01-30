@interface PXImportDiagnosticsService : PXDiagnosticsService

+ (void)simulateFakeImportSource;

- (void)performAction;
- (BOOL)canPerformAction;
- (id)title;

@end
