@class AWAttentionAwarenessClient, NSString, NSObject, NSMutableDictionary, CACUserAttentionSignalProviderFactory, CMWakeGestureManager;
@protocol CACUserAttentionControllerDelegate, OS_dispatch_queue;

@interface CACUserAttentionController : NSObject <CMWakeGestureDelegate> {
    CACUserAttentionSignalProviderFactory *_userAttentionSignalProviderFactory;
    unsigned long long _supportedAttentionAwarenessEvents;
    BOOL _deviceSupportsRaiseGestureDetection;
    AWAttentionAwarenessClient *_faceAttentionAwarenessClient;
    AWAttentionAwarenessClient *_touchAttentionAwarenessClient;
    CMWakeGestureManager *_wakeGestureManager;
    NSObject<OS_dispatch_queue> *_attentionAwarenessHandlerQueue;
    NSMutableDictionary *_attentionDetectionStatuses;
    NSObject<OS_dispatch_queue> *_asynchronousCallQueue;
}

@property (nonatomic, getter=_isDeviceLowered, setter=_setDeviceLowered:) BOOL deviceLowered;
@property (weak, nonatomic) id<CACUserAttentionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_deviceSupportsFaceDetection;
- (id)initWithSignalProviderFactory:(id)a0 supportedAttentionAwarenessEvents:(unsigned long long)a1 deviceSupportsRaiseGestureDetection:(BOOL)a2;
- (BOOL)stopIfNeeded:(id *)a0;
- (BOOL)startIfNeededForTypes:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_detectionStartedForType:(unsigned long long)a0;
- (BOOL)_startFaceAttentionAwarenessClient:(id *)a0;
- (void)_setDetectionStarted:(BOOL)a0 forType:(unsigned long long)a1;
- (BOOL)_startTouchAttentionAwarenessClient:(id *)a0;
- (void)_startWakeGestureManagerIfNeeded;
- (BOOL)stopIfNeededForTypes:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_stopFaceAttentionAwarenessClient:(id *)a0;
- (BOOL)_stopTouchAttentionAwarenessClient:(id *)a0;
- (void)_stopWakeGestureManagerIfNeeded;
- (void)_handleFaceAttentionEvent:(id)a0;
- (void)_handleFaceInterruptNotification:(unsigned long long)a0;
- (void)_handleTouchAttentionEvent:(id)a0;
- (BOOL)_restartFaceAttentionAwarenessClient:(id *)a0;
- (id)initWithSamplingInterval:(double)a0 attentionLossTimeout:(double)a1 supportedAttentionAwarenessEvents:(unsigned long long)a2 deviceSupportsRaiseGestureDetection:(BOOL)a3;
- (BOOL)startIfNeeded:(id *)a0;
- (void)startIfNeededForTypes:(unsigned long long)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

@end
