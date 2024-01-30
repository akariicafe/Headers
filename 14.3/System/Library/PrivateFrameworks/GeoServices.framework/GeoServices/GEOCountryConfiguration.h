@class NSMutableArray, NSString, _GEOCountryConfigurationInfo, NSMutableDictionary, geo_isolater;
@protocol _GEOCountryConfigurationServerProxy;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {
    geo_isolater *_isolater;
    _GEOCountryConfigurationInfo *_countryCodeInfo;
    NSMutableArray *_updateCompletionHandlers;
    NSMutableDictionary *_supportedFeatures;
    geo_isolater *_currentCountrySupportsNavigationIsolater;
    BOOL _currentCountrySupportsNavigation;
    BOOL _determinedCurrentCountrySupportsNavigation;
    double _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
    id<_GEOCountryConfigurationServerProxy> _serverProxy;
}

@property (class, readonly) GEOCountryConfiguration *sharedConfiguration;

@property (readonly, nonatomic) BOOL zilchPointsSupported;
@property (readonly, nonatomic) BOOL shouldUseGuidanceEventManager;
@property (readonly, nonatomic) BOOL shouldRequestLaneGuidance;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL currentCountrySupportsTraffic;
@property (readonly, nonatomic) BOOL currentCountrySupportsDirections;
@property (readonly, nonatomic) BOOL currentCountrySupportsNavigation;
@property (readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property (readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property (readonly, nonatomic) BOOL currentCountrySupportsCommute;
@property (readonly, nonatomic) BOOL currentCountrySupportsElectricVehicleRouting;
@property (readonly, nonatomic) double urlAuthenticationTimeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(BOOL)a0;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (BOOL)countryCode:(id)a0 supportsFeature:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_resetSupportedFeatures;
- (id)_countryCodeOnIsolationQueue;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 decoder:(id /* block */)a2;
- (id)countryCodeWithSource:(unsigned int *)a0 updatedAtTime:(id *)a1;
- (void)serverProxyProvidersDidChange:(id)a0;
- (void)updateCountryConfiguration:(id /* block */)a0 callbackQueue:(id)a1;
- (void)updateProvidersForCurrentCountry;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2 decoder:(id /* block */)a3;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2;
- (void)serverProxy:(id)a0 countryCodeDidChange:(id)a1;
- (void)updateCountryConfiguration:(id /* block */)a0;
- (id)_countryDefaultForKey:(id)a0 inCountry:(id)a1 sourcePtr:(long long *)a2 decoder:(id /* block */)a3;
- (BOOL)currentCountrySupportsFeature:(long long)a0;
- (id)_defaultForKey:(id)a0 inCountry:(id)a1 defaultValue:(id)a2 sourcePtr:(long long *)a3 decoder:(id /* block */)a4;

@end
