@class GEOMapRegion, VKCamera, VKCameraController;
@protocol MDRenderTarget;

@interface VKImageCanvas : NSObject {
    struct _retain_ptr<VKCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKCameraController *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _cameraController;
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
    struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKCamera *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _vkCamera;
    id<MDRenderTarget> _displayTarget;
    void *_mapRenderer;
    void *_layoutContext;
    struct RunLoopController { struct MapEngine *x0; long long x1; long long x2; } *_runLoopController;
}

@property (readonly, nonatomic) struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; } taskContext;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) VKCamera *vkCamera;
@property (readonly, nonatomic) struct shared_ptr<gdc::Camera> { struct Camera *__ptr_; struct __shared_weak_count *__cntrl_; } camera;
@property (nonatomic) int mapType;
@property (nonatomic) struct VKEdgeInsets { float top; float left; float bottom; float right; } edgeInsets;

- (void)didLayout;
- (void)clearScene;
- (id).cxx_construct;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3;
- (id)initWithMapEngine:(void *)a0;
- (void)didReceiveMemoryWarning:(BOOL)a0;
- (void)cancelLoad;
- (void)renderSceneWithEngine:(void *)a0 completion:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;
- (void)loadScene;
- (void)setMapRegion:(id)a0 pitch:(double)a1 yaw:(double)a2;
- (void)cancelTileRequests;
- (void).cxx_destruct;

@end
