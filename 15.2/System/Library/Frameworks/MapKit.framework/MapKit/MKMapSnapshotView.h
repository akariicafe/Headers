@class MKMapSnapshotter;

@interface MKMapSnapshotView : UIImageView {
    MKMapSnapshotter *_snapshotter;
    MKMapSnapshotter *_gridSnapshotter;
}

- (void)takeSnapshotWithOptions:(id)a0 gridOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)cancel;

@end
