@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage {
    XBApplicationSnapshot *_snapshot;
}

@property (readonly, nonatomic) long long interfaceOrientation;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSnapshot:(id)a0 interfaceOrientation:(long long)a1;

@end
