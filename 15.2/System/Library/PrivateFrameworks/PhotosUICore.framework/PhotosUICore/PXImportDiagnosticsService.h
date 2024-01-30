@interface PXImportDiagnosticsService : PXDiagnosticsService

+ (void)simulateFakeImportSource;

- (BOOL)canPerformAction;
- (id)title;
- (void)performAction;

@end
