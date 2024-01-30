@interface PXDebugDictionaryDiagnosticsService : PXDiagnosticsService

- (id)contextualViewController;
- (BOOL)canProvideConsoleDescription;
- (id)consoleDescription;
- (BOOL)canProvideContextualViewController;
- (id)_debugDictionary;
- (id)title;

@end
