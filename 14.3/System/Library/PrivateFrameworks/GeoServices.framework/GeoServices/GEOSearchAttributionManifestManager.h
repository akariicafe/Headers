@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) id<GEOSearchAttributionServerProxy> serverProxy;

+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (id)sharedManager;
+ (void)useProxy:(Class)a0;
+ (void)setUseLocalProxy:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
