@class NSMutableDictionary, NSMapTable, PKDaemonClient, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKHost : NSObject

@property (retain) NSMutableDictionary *activePlugIns;
@property (retain) NSMutableDictionary *activeOneShots;
@property (retain) NSMapTable *discoveryMap;
@property (retain) NSObject<OS_dispatch_queue> *hostQueue;
@property (retain) PKDaemonClient *daemon;
@property (readonly) NSDictionary *hostInfoPlist;

+ (id)defaultHost;

- (void)setExtensionState:(id)a0 forPlugIn:(id)a1;
- (void)cancelPlugInDiscovery:(id)a0;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)a0 flags:(unsigned long long)a1 found:(id /* block */)a2;
- (void)readyPlugIns:(id)a0 synchronously:(BOOL)a1 environment:(id)a2 languages:(id)a3 ready:(id /* block */)a4;
- (void)discoverPlugInsForAttributes:(id)a0 flags:(unsigned long long)a1 found:(id /* block */)a2;
- (void)deactivatePlugIn:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)rewriteDiscoveryAttributes:(id)a0 flags:(unsigned long long)a1;
- (void)accessPlugIns:(id)a0 synchronously:(BOOL)a1 flags:(unsigned long long)a2 extensions:(id /* block */)a3;
- (id)activePlugInForIdentifier:(id)a0;
- (void)findPlugInByUUID:(id)a0 reply:(id /* block */)a1;
- (void)findPlugInByPathURL:(id)a0 reply:(id /* block */)a1;
- (void)setElection:(long long)a0 forPlugIn:(id)a1;
- (id)activatePlugIn:(id)a0;

@end
