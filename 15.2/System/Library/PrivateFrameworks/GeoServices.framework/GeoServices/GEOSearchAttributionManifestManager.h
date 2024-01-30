@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) id<GEOSearchAttributionServerProxy> serverProxy;

+ (void)useProxy:(Class)a0;
+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)setUseLocalProxy:(BOOL)a0;
+ (void)useRemoteProxy;

- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
