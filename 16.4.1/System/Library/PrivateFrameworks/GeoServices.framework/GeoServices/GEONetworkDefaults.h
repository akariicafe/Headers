@class NSString, NSDictionary, NSMutableArray, geo_isolater;
@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {
    id<_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    geo_isolater *_networkDefaultsIsolation;
}

@property (class) BOOL useLocalProxy;
@property (class, readonly) GEONetworkDefaults *sharedNetworkDefaults;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allKeysAndValues:(id /* block */)a0;
- (void)updateIfNecessary:(id /* block */)a0;
- (void)updateNetworkDefaults:(id /* block */)a0;
- (void)serverProxy:(id)a0 networkDefaultsDidChange:(id)a1;
- (id)valueForKey:(id)a0;
- (id)init;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)allKeys;
- (void).cxx_destruct;

@end
