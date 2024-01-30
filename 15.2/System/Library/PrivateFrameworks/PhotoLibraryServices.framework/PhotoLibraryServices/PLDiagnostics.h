@interface PLDiagnostics : NSObject

+ (void)fileRadarUserNotificationWithHeader:(id)a0 message:(id)a1 radarTitle:(id)a2 radarDescription:(id)a3;
+ (id)logDirectoryURL;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)a0 handler:(id /* block */)a1;
+ (id)matchingNameExpression;
+ (id)excludingNameExpression;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)a0 queue:(id)a1 propertyListHandler:(id /* block */)a2;
+ (void)tapToRadarWithTitle:(id)a0 description:(id)a1;
+ (BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)a0 radarTitle:(id)a1;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)a0;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)a0;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)a0;
+ (void)collectMomentsStatWithLibraryContext:(id)a0 completionBlock:(id /* block */)a1;
+ (id)diagnosticsURLs;

@end
