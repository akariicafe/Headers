@interface MapsSync.MapsSyncUtil : NSObject

+ (id)userHomeDirectory;
+ (void)assertMainQueueWithDebug:(BOOL)a0;
+ (void)assertNotQueue:(id)a0 debug:(BOOL)a1;
+ (BOOL)isMapsInstalled;
+ (void)assertNotMainQueueWithDebug:(BOOL)a0;
+ (void)assertQueue:(id)a0 debug:(BOOL)a1;
+ (id)getApplicationIdentifier;
+ (id)mapsContainerDataDirectory;
+ (id)mapsGroupDirectory;
+ (id)mapsUserDirectory;

- (id)init;

@end
