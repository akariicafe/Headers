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

- (void)_gestureChangedEnoughToCreateEvent;
- (void)_cleanUp;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)currentlyCreatingEvent;
- (void).cxx_destruct;
- (void)handleGesture:(id)a0;
- (void)dealloc;
- (id)initWithView:(id)a0 delegate:(id)a1;
- (void)_gestureBegan;
- (void)_gestureUpdated;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_gestureCanceled;
- (id)_snapDate:(id)a0 toInterval:(double)a1;
- (void)_gestureCompleted;
- (void)invalidate;
- (void)_adjustPreviewFrame;

@end
