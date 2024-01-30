@class NSString;

@interface VKManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>

@property struct function<void (GEOResourceManifestManager *)> { struct __value_func<void (GEOResourceManifestManager *)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void (GEOResourceManifestManager *)> *__f_; } __f_; } willChangeActiveTileGroup;
@property struct function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> { struct __value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> *__f_; } __f_; } didChangeActiveTileGroup;
@property struct function<void (GEOExperimentConfiguration *)> { struct __value_func<void (GEOExperimentConfiguration *)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void (GEOExperimentConfiguration *)> *__f_; } __f_; } experimentConfigurationDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)experimentConfigurationDidChange:(id)a0;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;

@end
