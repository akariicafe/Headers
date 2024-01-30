@class NSString, VKManifestTileGroupObserverProxy, VKMapModel;

@interface VKMapImageCanvas : VKImageCanvas <VKMapModelDelegate, MDSnapshotMap> {
    VKMapModel *_mapModel;
    void *_mapEngine;
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKManifestTileGroupObserverProxy *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _manifestTileGroupObserverProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMapType:(int)a0;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)clearScene;
- (id)initWithMapEngine:(void *)a0;
- (void)mapModel:(id)a0 selectedLabelMarkerWillDisappear:(const void *)a1;
- (void)resetCameraController;
- (void)mapModelLabelsDidLayout:(id)a0;
- (void).cxx_destruct;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)a0;
- (void)mapModel:(id)a0 labelMarkerDidChangeState:(const void *)a1;
- (void)cancelTileRequests;
- (void)tileGroupDidChange;
- (void)dealloc;
- (id).cxx_construct;

@end
