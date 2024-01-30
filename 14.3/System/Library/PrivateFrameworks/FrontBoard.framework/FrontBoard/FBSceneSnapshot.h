@class FBSceneSnapshotContext, IOSurface, _FBSSnapshot, FBScene;

@interface FBSceneSnapshot : NSObject {
    FBScene *_scene;
    _FBSSnapshot *_snapshot;
}

@property (readonly, copy, nonatomic) FBSceneSnapshotContext *context;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) struct CGImage { } *CGImage;

- (void).cxx_destruct;
- (BOOL)capture;
- (id)initWithScene:(id)a0 snapshotContext:(id)a1;
- (id)_collectLayersToSnapshotFromScene:(id)a0 withSnapshotContext:(id)a1 rootContext:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_baseTransformForSnapshotContext:(id)a0 rootContext:(id)a1;

@end
