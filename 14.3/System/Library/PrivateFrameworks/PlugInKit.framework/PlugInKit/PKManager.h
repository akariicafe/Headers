@class PKDaemonClient;

@interface PKManager : NSObject

@property (retain) PKDaemonClient *client;

+ (id)managerForUser:(unsigned int)a0;
+ (id)defaultManager;

- (void)forceHoldPlugIn:(id)a0 result:(id /* block */)a1;
- (id)terminatePlugInsInApplication:(id)a0 options:(long long)a1 withError:(id *)a2;
- (BOOL)releaseHold:(id)a0 flags:(unsigned long long)a1 withError:(id *)a2;
- (void).cxx_destruct;
- (void)holdRequest:(id)a0 flags:(unsigned long long)a1 result:(id /* block */)a2;
- (void)unregisterPlugInsInBundle:(id)a0 result:(id /* block */)a1;
- (id)containingAppForPlugInConnectedTo:(id)a0;
- (void)holdPlugInsInApplication:(id)a0 result:(id /* block */)a1;
- (id)forceHoldPlugIn:(id)a0 withError:(id *)a1;
- (id)holdPlugInsInApplication:(id)a0 withError:(id *)a1;
- (id)initForUser:(unsigned int)a0;
- (void)registerPlugInAtURL:(id)a0 result:(id /* block */)a1;
- (id)initForService:(const char *)a0;
- (void)updateExtensionStatesForPlugIns:(id)a0 result:(id /* block */)a1;
- (void)unregisterPlugInAtURL:(id)a0 result:(id /* block */)a1;
- (id)informationForPlugInWithPid:(int)a0;
- (id)containingAppForPlugInWithPid:(int)a0;
- (void)releaseHold:(id)a0;
- (void)terminatePlugInsInApplication:(id)a0 options:(long long)a1 result:(id /* block */)a2;
- (void)releaseHold:(id)a0 reply:(id /* block */)a1;
- (BOOL)terminatePlugInAtURL:(id)a0 withError:(id *)a1;
- (id)containingAppForExtensionProperties:(id)a0;
- (BOOL)releaseHold:(id)a0 withError:(id *)a1;
- (void)registerPlugInsInBundle:(id)a0 result:(id /* block */)a1;

@end
