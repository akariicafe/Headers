@class HMDSnapshotSession;

@interface HMDSnapshotCompletionTimer : HMFTimer

@property (readonly, weak, nonatomic) HMDSnapshotSession *snapshotSession;

- (void).cxx_destruct;
- (id)initWithSnapshotSession:(id)a0 timer:(double)a1;

@end
