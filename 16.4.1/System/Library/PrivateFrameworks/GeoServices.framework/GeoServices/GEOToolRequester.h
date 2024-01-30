@interface GEOToolRequester : NSObject <GEOToolProxy>

+ (id)sharedRequester;

- (id)ping;
- (void)invalidateTileCache;
- (void)forceProactiveTileDownloaderRun;
- (void)lockDBs;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)a0;
- (unsigned long long)freePurgableSpace:(unsigned long long)a0 forUrgency:(int)a1;
- (id)getDefault:(id)a0 source:(long long *)a1;
- (BOOL)isProactiveTileDownloadEnabled;
- (id)listFilePathsLocal;
- (id)listFilePathsRemote;
- (BOOL)notifyNetworkDefaultsChanged;
- (void)unlockDBs;

@end
