@class NSString, NSMutableSet, AXUltronModelAssetManager;
@protocol AXSDDetectorQueueManagerDelegate;

@interface AXSDDetectorQueueManager : NSObject <AXSDUltronModelAssetManagerDelegate> {
    AXUltronModelAssetManager *_assetManager;
    NSMutableSet *_detectorQueue;
    BOOL _ready;
}

@property (weak, nonatomic) id<AXSDDetectorQueueManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (void).cxx_destruct;
- (id)init;
- (void)assetsReadyForUltronManager:(id)a0;
- (void)assetsNotReadyForUltronManager:(id)a0;
- (void)assets:(id)a0 totalSizeExpected:(long long)a1 downloadProgressTotalWritten:(long long)a2 remainingTimeExpected:(double)a3 isStalled:(BOOL)a4;
- (void)_queueListenType:(id)a0;
- (void)_dequeueListenType:(id)a0;
- (id)currentDetectionTypes;
- (void)removeAllListenTypes;
- (void)addListenType:(id)a0;
- (void)removeListenType:(id)a0;
- (BOOL)prepareToListen;

@end
