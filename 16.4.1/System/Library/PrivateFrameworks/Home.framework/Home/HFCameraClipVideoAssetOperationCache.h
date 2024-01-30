@class NSObject, NSMutableDictionary, HFCameraClipVideoAssetOperationMarker;
@protocol OS_dispatch_queue;

@interface HFCameraClipVideoAssetOperationCache : NSObject

@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) HFCameraClipVideoAssetOperationMarker *head;
@property (retain, nonatomic) HFCameraClipVideoAssetOperationMarker *tail;
@property (retain, nonatomic) NSMutableDictionary *markerInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (double)defaultFrameSize;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (void)_removeOperationForKey:(id)a0;
- (void)addOperation:(id)a0 forClip:(id)a1 usingKey:(id)a2;
- (unsigned long long)cacheSizeForDevice;
- (id)operationForKey:(id)a0;
- (void)pointHeadAtMarker:(id)a0;
- (void)removeMarker:(id)a0;
- (void)removeOperationForKey:(id)a0;
- (void)resetSentinels;

@end
