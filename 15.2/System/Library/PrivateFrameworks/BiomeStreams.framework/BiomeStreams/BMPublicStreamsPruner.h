@interface BMPublicStreamsPruner : NSObject

+ (void)pruneWithInstalledApplications:(id)a0 activity:(id)a1;
+ (BOOL)shouldDeleteEvent:(id)a0 withUninstalledApplication:(id)a1;
+ (void)prunePublicStreamsWithPredicate:(id /* block */)a0;
+ (BOOL)shouldDeleteEvent:(id)a0 withInstalledApplications:(id)a1;
+ (void)prunePublicStream:(id)a0 configuration:(id)a1 deletionPredicate:(id /* block */)a2;
+ (void)pruneStreamDataStore:(id)a0 deletionPredicate:(id /* block */)a1;
+ (void)pruneWithInstalledApplications:(id)a0;
+ (void)pruneWithUninstalledBundleIdentifier:(id)a0;

@end
