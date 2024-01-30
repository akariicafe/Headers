@class HMDSnapshotFile, NSString, HMFTimer;

@interface HMDSnapshotCacheEntry : HMFObject

@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly, nonatomic) NSString *proactiveSessionID;
@property (readonly, nonatomic) HMFTimer *timer;
@property (copy, nonatomic) id /* block */ snapshotRequestCompletion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProactiveSessionID:(id)a0 snapshotFile:(id)a1 timer:(id)a2;

@end
