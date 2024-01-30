@class UITraitCollection, NSArray, MKMapSnapshotOptions, MKMapSnapshotter, MKMapCamera;

@interface MKAnnotatedMapSnapshotter : NSObject {
    NSArray *_mapItems;
    struct CGSize { double width; double height; } _mapSize;
    MKMapSnapshotOptions *_snapshotOptions;
    BOOL _useSnapshotService;
    MKMapSnapshotter *_snapshotter;
}

@property (readonly, nonatomic) MKMapCamera *camera;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)_initSnapshotterWithMapItems;
- (id)initWithMapItems:(id)a0 mapSize:(struct CGSize { double x0; double x1; })a1 useSnapshotService:(BOOL)a2;

@end
