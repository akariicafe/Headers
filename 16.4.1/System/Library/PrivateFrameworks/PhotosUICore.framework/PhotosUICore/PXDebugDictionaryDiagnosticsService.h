@interface PXDebugDictionaryDiagnosticsService : PXDiagnosticsService

- (id)_debugDictionary;
- (id)title;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (id)consoleDescription;
- (id)contextualViewController;

@end
