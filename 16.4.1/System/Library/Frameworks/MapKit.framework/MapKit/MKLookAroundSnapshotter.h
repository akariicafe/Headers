@class MKMapSnapshotter;

@interface MKLookAroundSnapshotter : NSObject {
    MKMapSnapshotter *_snapshotter;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)cancel;
- (void).cxx_destruct;
- (void)getSnapshotWithCompletionHandler:(id /* block */)a0;
- (id)initWithScene:(id)a0 options:(id)a1;

@end
