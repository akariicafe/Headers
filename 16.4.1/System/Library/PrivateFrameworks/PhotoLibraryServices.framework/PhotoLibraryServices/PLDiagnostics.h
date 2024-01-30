@interface PLDiagnostics : NSObject

+ (id)diagnosticsURLs;
+ (id)logDirectoryURL;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)a0;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)a0 queue:(id)a1 propertyListHandler:(id /* block */)a2;
+ (void)collectMomentsStatWithLibraryContext:(id)a0 completionBlock:(id /* block */)a1;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)a0;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)a0 handler:(id /* block */)a1;
+ (id)excludingNameExpression;
+ (void)fileRadarUserNotificationWithHeader:(id)a0 message:(id)a1 radarTitle:(id)a2 radarDescription:(id)a3;
+ (id)matchingNameExpression;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)a0;
+ (BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)a0 radarTitle:(id)a1;
+ (void)tapToRadarWithTitle:(id)a0 description:(id)a1;

@end
