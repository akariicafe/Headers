@class NSString, UIView;

@interface SBIconViewSnapshotProvider : NSObject <SBIconViewSnapshotProviding> {
    id /* block */ _invalidationBlock;
}

@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSnapshotView:(id)a0 invalidation:(id /* block */)a1;

@end
