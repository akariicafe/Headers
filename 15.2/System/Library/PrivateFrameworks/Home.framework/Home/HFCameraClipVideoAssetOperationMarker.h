@class NSString, HMCameraClip, HMCameraClipFetchVideoAssetContextOperation;

@interface HFCameraClipVideoAssetOperationMarker : NSObject

@property (retain, nonatomic) HMCameraClip *clip;
@property (retain, nonatomic) NSString *key;
@property (weak, nonatomic) HFCameraClipVideoAssetOperationMarker *previous;
@property (weak, nonatomic) HFCameraClipVideoAssetOperationMarker *next;
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *operation;

+ (id)sentinelWithKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithCameraClip:(id)a0 operation:(id)a1 key:(id)a2;

@end
