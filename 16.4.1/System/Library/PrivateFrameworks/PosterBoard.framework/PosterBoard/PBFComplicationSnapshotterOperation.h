@class PBFComplicationSnapshotRequest, NSString, NSObject, PBFComplicationSnapshotter;
@protocol OS_dispatch_group;

@interface PBFComplicationSnapshotterOperation : NSBlockOperation <PBFComplicationSnapshotterObserver> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSObject<OS_dispatch_group> *_lock_group;
    BOOL _lock_snapshotterDidStart;
}

@property (readonly, nonatomic) PBFComplicationSnapshotRequest *request;
@property (readonly, nonatomic) PBFComplicationSnapshotter *snapshotter;
@property (nonatomic) long long attempt;
@property (nonatomic) long long maxNumberOfAttempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)complicationSnapshotter:(id)a0 didFinishWithSnapshot:(id)a1 error:(id)a2;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_leaveMainGroup;
- (void)_snapshotterDidStart;
- (id)initWithRequest:(id)a0 snapshotter:(id)a1;

@end
