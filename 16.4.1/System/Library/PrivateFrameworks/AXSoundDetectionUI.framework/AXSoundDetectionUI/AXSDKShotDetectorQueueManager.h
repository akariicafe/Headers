@class NSString, NSMutableSet, AXUltronModelAssetManager;
@protocol AXSDKShotDetectorQueueManagerDelegate;

@interface AXSDKShotDetectorQueueManager : NSObject <AXSDUltronModelAssetManagerDelegate> {
    AXUltronModelAssetManager *_assetManager;
    NSMutableSet *_detectorQueue;
    BOOL _ready;
    BOOL _queueGeneralDetector;
}

@property (weak, nonatomic) id<AXSDKShotDetectorQueueManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (void)assetsNotReadyForUltronManager:(id)a0;
- (BOOL)prepareToListen;
- (void)_dequeueListenType:(id)a0;
- (void)_queueListenType:(id)a0;
- (void)addGeneralApplianceDetector;
- (void)addListenType:(id)a0;
- (void)assets:(id)a0 totalSizeExpected:(long long)a1 downloadProgressTotalWritten:(long long)a2 remainingTimeExpected:(double)a3 isStalled:(BOOL)a4;
- (void)assetsReadyForUltronManager:(id)a0;
- (id)currentDetectionTypes;
- (BOOL)currentGeneralDetectorIsValid;
- (void)removeAllListenTypes;
- (void)removeGeneralApplianceDetector;
- (void)removeListenType:(id)a0;

@end
