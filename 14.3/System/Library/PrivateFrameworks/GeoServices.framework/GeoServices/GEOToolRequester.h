@interface GEOToolRequester : NSObject <GEOToolProxy>

+ (id)sharedRequester;

- (id)ping;
- (void)lockDBs;
- (void)unlockDBs;
- (id)getDefault:(id)a0 source:(long long *)a1;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)a0;
- (unsigned long long)freePurgableSpace:(unsigned long long)a0 forUrgency:(int)a1;
- (BOOL)notifyNetworkDefaultsChanged;
- (void)invalidateTileCache;

@end
