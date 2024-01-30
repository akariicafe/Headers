@class NSData, HMFOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshotData : HMFObject

@property (readonly) NSData *snapshotData;
@property (readonly) HMFOSTransaction *snapshotDataTrasaction;
@property (readonly) HMDVideoResolution *videoResolution;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSnapshotData:(id)a0 videoResolution:(id)a1 snapshotDataTrasaction:(id)a2;
- (id)initWithSnapshotFile:(id)a0 videoResolution:(id)a1;

@end
