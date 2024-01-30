@class NSString, PBFPosterSnapshotRequest, NSObject, PBFPosterSnapshotter;
@protocol OS_dispatch_group;

@interface PBFPosterSnapshotterOperation : NSBlockOperation <PBFPosterSnapshotterObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_snapshotterDidStart;
    NSObject<OS_dispatch_group> *_lock_group;
}

@property (readonly, nonatomic) PBFPosterSnapshotRequest *request;
@property (readonly, nonatomic) PBFPosterSnapshotter *snapshotter;
@property unsigned long long advisoryQueuePriority;
@property (nonatomic) long long attempt;
@property (nonatomic) long long maxNumberOfAttempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_leaveMainGroup;
- (void)_snapshotterDidStart;
- (id)initWithRequest:(id)a0 snapshotter:(id)a1;
- (void)snapshotter:(id)a0 failedWithError:(id)a1;
- (void)snapshotterDidTakeSnapshots:(id)a0 snapshotsByDefinition:(id)a1;

@end
