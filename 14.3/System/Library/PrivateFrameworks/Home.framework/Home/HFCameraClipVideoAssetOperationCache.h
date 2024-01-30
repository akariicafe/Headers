@class NSMutableDictionary, HFCameraClipVideoAssetOperationMarker;

@interface HFCameraClipVideoAssetOperationCache : NSObject

@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) HFCameraClipVideoAssetOperationMarker *head;
@property (retain, nonatomic) HFCameraClipVideoAssetOperationMarker *tail;
@property (retain, nonatomic) NSMutableDictionary *markerInfo;

+ (double)defaultFrameSize;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (id)operationForKey:(id)a0;
- (void)addOperation:(id)a0 forClip:(id)a1 usingKey:(id)a2;
- (void)removeOperationForKey:(id)a0;
- (unsigned long long)cacheSizeForDevice;
- (void)resetSentinels;
- (void)pointHeadAtMarker:(id)a0;
- (void)removeMarker:(id)a0;

@end
