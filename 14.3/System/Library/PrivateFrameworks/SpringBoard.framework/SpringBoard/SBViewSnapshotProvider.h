@class UIView;

@interface SBViewSnapshotProvider : NSObject {
    UIView *_view;
    long long _orientation;
}

@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)snapshot;
- (void)snapshotAsynchronously:(BOOL)a0 withImageBlock:(id /* block */)a1;
- (id)initWithView:(id)a0 orientation:(long long)a1;
- (void)snapshotWithImageBlock:(id /* block */)a0;

@end
