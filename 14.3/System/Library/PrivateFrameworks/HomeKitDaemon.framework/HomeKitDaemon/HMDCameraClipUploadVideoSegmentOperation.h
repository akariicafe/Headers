@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation

+ (id)logCategory;
+ (BOOL)shouldRetry;
+ (id)streamingAssetPropertyName;
+ (id)metadataPropertyName;

@end
