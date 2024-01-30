@class HMFTimer, NSString, NSData, HMDCameraClipSegmentMetadata, HMCameraClipEncryptionManager;

@interface HMDCameraClipAppendStreamingAssetOperation : HMDCameraClipOperation <HMFTimerDelegate>

@property (class, readonly, copy) NSString *streamingAssetPropertyName;
@property (class, readonly, copy) NSString *metadataPropertyName;
@property (class, readonly) BOOL shouldRetry;

@property (retain) HMFTimer *retryTimer;
@property (readonly) NSData *data;
@property (readonly) HMDCameraClipSegmentMetadata *metadata;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (void)timerDidFire:(id)a0;
- (id)attributeDescriptions;
- (void)main;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 data:(id)a2 metadata:(id)a3 encryptionManager:(id)a4;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 data:(id)a2 metadata:(id)a3 encryptionManager:(id)a4 dataSource:(id)a5;
- (id)_updateClipModel:(id)a0 usingStreamingAsset:(id)a1;
- (id)_retryDelayForError:(id)a0;

@end
