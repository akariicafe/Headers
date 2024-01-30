@class UIView;

@interface SBViewSnapshotProvider : NSObject {
    UIView *_view;
    long long _orientation;
}

@property (copy, nonatomic) id /* block */ completionBlock;

- (id)snapshot;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 orientation:(long long)a1;
- (void)snapshotAsynchronously:(BOOL)a0 withImageBlock:(id /* block */)a1;
- (void)snapshotWithImageBlock:(id /* block */)a0;

@end
