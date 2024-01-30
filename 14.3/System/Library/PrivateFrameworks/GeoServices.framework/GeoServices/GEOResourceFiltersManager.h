@class NSSet, GEOResourceManifestConfiguration, GEOActiveResourceFilters;
@protocol GEOResourceFiltersManagerDelegate;

@interface GEOResourceFiltersManager : NSObject {
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<GEOResourceFiltersManagerDelegate> delegate;
@property (readonly, nonatomic) NSSet *activeScales;
@property (readonly, nonatomic) NSSet *activeScenarios;

- (id)init;
- (void).cxx_destruct;
- (void)_activateFilters:(id /* block */)a0 setValueBlock:(id /* block */)a1;
- (void)deactivateScale:(int)a0;
- (void)_deactivateFilters:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0;
- (void)activateScenario:(int)a0;
- (void)_writeToDisk;
- (void)deactivateScenario:(int)a0;
- (void)activateScale:(int)a0;

@end
