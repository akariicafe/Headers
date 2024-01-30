@class NSString, EKEvent, EKDayOccurrenceView, UIView, NSObject, UILongPressGestureRecognizer;
@protocol EKEventCreationGestureControllerDelegate;

@interface EKEventCreationGestureController : NSObject <UIGestureRecognizerDelegate> {
    NSObject<EKEventCreationGestureControllerDelegate> *_gestureDelegate;
    UIView *_targetView;
    UILongPressGestureRecognizer *_gestureRecognizer;
    EKEvent *_newEvent;
    UIView *_containerView;
    EKDayOccurrenceView *_eventPreview;
    struct CGPoint { double x; double y; } _originPoint;
    int _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)currentlyCreatingEvent;
- (void)handleGesture:(id)a0;
- (void)_gestureCompleted;
- (void)_cleanUp;
- (void)_gestureCanceled;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_gestureUpdated;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (id)_snapDateTo15MinuteInterval:(id)a0;
- (void)_gestureBegan;
- (void)_adjustPreviewFrame;
- (void)invalidate;
- (id)initWithView:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)_gestureChangedEnoughToCreateEvent;

@end
