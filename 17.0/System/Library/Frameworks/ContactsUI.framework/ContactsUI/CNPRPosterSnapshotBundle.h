@class PRPosterSnapshotBundle;

@interface CNPRPosterSnapshotBundle : NSObject

@property (readonly, nonatomic) PRPosterSnapshotBundle *wrappedSnapshotBundle;

- (void).cxx_destruct;
- (id)initWithWrappedBundle:(id)a0;
- (id)snapshotForLevelSet:(id)a0;

@end
