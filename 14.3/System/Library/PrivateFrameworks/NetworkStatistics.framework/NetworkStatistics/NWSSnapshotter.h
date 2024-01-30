@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject

@property unsigned long long kernelSourceRef;
@property (retain) NWSSnapshotSource *snapshotSource;

- (void).cxx_destruct;
- (id)snapshot;

@end
