@interface PXDebugDictionaryDiagnosticsService : PXDiagnosticsService

- (id)title;
- (id)_debugDictionary;
- (BOOL)canProvideConsoleDescription;
- (id)consoleDescription;
- (BOOL)canProvideContextualViewController;
- (id)contextualViewController;

@end
