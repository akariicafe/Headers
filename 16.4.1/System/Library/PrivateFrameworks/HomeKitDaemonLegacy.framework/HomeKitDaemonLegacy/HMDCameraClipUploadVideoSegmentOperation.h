@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation

+ (BOOL)shouldRetry;
+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;
+ (id)metadataPropertyName;
+ (id)streamingAssetPropertyName;

@end
