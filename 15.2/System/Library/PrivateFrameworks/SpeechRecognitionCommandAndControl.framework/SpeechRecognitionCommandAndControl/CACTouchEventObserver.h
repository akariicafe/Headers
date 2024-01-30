@class AXMutableReplayableGesture, AXEventProcessor;
@protocol CACTouchEventObserverDelegate;

@interface CACTouchEventObserver : NSObject {
    AXEventProcessor *_eventProcessor;
    BOOL _areTouchesDown;
}

@property (retain, nonatomic) AXMutableReplayableGesture *gestureBeingRecorded;
@property (nonatomic) double startTimeForGestureBeingRecorded;
@property (readonly, nonatomic) BOOL isRecording;
@property (weak, nonatomic) id<CACTouchEventObserverDelegate> delegate;

- (void)endObserving;
- (void).cxx_destruct;
- (id)init;
- (void)beginObserving;
- (void)startRecordingGesture;
- (id)stopRecordingGesture;
- (void)_didReceiveEvent:(id)a0;
- (BOOL)_isLiftEvent:(id)a0;
- (void)_recordEvent:(id)a0;
- (BOOL)_isTouchEvent:(id)a0;

@end
