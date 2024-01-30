@class AXHAListenEngine, NSSet, NSString, NSMutableSet, AXUltronModelAssetManager, AXHADetectorManager;

@interface AXHASoundDetectionController : NSObject <AXHAListenEngineDelegate, AXHADetectorManagerDelegate, AXHAUltronModelAssetManagerDelegate> {
    AXHAListenEngine *_listener;
    AXHADetectorManager *_detectorManager;
    AXUltronModelAssetManager *_assetManager;
    NSMutableSet *_detectorQueue;
    BOOL _ready;
}

@property (readonly) NSSet *currentDetectionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (void)startListening;
- (void)assetsReadyForUltronManager:(id)a0;
- (void)assetsNotReadyForUltronManager:(id)a0;
- (void)assets:(id)a0 totalSizeExpected:(long long)a1 downloadProgressTotalWritten:(long long)a2 remainingTimeExpected:(double)a3 isStalled:(BOOL)a4;
- (void)_queueListenType:(id)a0;
- (void)_dequeueListenType:(id)a0;
- (void)removeAllListenTypes;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)addListenType:(id)a0;
- (void)removeListenType:(id)a0;

@end
