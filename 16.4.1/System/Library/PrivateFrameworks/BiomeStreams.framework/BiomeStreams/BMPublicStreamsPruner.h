@interface BMPublicStreamsPruner : NSObject

+ (void)pruneWithInstalledApplications:(id)a0 installedAppExtensions:(id)a1 activity:(id)a2;
+ (void)prunePublicStream:(id)a0 configuration:(id)a1 deletionPredicate:(id /* block */)a2;
+ (void)prunePublicStreamsWithPredicate:(id /* block */)a0;
+ (void)pruneStreamDataStore:(id)a0 deletionPredicate:(id /* block */)a1;
+ (void)pruneWithInstalledApplications:(id)a0 installedAppExtensions:(id)a1;
+ (void)pruneWithUninstalledBundleIdentifier:(id)a0;
+ (BOOL)shouldDeleteAppLaunch:(id)a0 withInstalledApplications:(id)a1 installedAppExtensions:(id)a2;
+ (BOOL)shouldDeleteEvent:(id)a0 withInstalledApplications:(id)a1 installedAppExtensions:(id)a2;
+ (BOOL)shouldDeleteEvent:(id)a0 withUninstalledApplication:(id)a1;

@end
