@class AXMutableReplayableGesture, AXEventProcessor;
@protocol CACTouchEventObserverDelegate;

@interface CACTouchEventObserver : NSObject {
    AXEventProcessor *_eventProcessor;
    BOOL _areTouchesDown;
}

@property (retain, nonatomic) AXMutableReplayableGesture *gestureBeingRecorded;
@property (nonatomic) double startTimeForGestureBeingRecorded;
@property (weak, nonatomic) id<CACTouchEventObserverDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)beginObserving;
- (void)endObserving;
- (void)startRecordingGesture;
- (id)stopRecordingGesture;
- (void)_didReceiveEvent:(id)a0;
- (BOOL)_isLiftEvent:(id)a0;
- (void)_recordEvent:(id)a0;
- (BOOL)_isTouchEvent:(id)a0;

@end
