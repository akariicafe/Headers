@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject

@property unsigned long long kernelSourceRef;
@property (retain) NWSSnapshotSource *snapshotSource;

- (id)snapshot;
- (void).cxx_destruct;

@end
