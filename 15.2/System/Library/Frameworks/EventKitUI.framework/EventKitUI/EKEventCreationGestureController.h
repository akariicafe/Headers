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

- (id)initWithView:(id)a0 delegate:(id)a1;
- (id)_snapDate:(id)a0 toInterval:(double)a1;
- (void)_gestureCompleted;
- (void)_gestureBegan;
- (void)_adjustPreviewFrame;
- (void)handleGesture:(id)a0;
- (BOOL)currentlyCreatingEvent;
- (void).cxx_destruct;
- (void)_gestureUpdated;
- (void)invalidate;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_gestureCanceled;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)_cleanUp;
- (void)_gestureChangedEnoughToCreateEvent;

@end
