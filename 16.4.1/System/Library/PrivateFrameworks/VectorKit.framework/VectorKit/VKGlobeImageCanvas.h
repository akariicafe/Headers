@class NSString, VKCamera;

@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap> {
    void *_globeView;
    VKCamera *_vkCamera;
    struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> { struct __compressed_pair<md::GlobeAdapter *, std::default_delete<md::GlobeAdapter>> { struct GlobeAdapter *__value_; } __ptr_; } _globeAdapter;
    void *_loadingStatusTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDealloc;
- (void)didLayout;
- (id).cxx_construct;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (id)initWithMapEngine:(void *)a0;
- (void)setMapType:(int)a0;
- (void)dealloc;
- (void)_updateViewport;
- (void)cancelTileRequests;
- (void).cxx_destruct;

@end
