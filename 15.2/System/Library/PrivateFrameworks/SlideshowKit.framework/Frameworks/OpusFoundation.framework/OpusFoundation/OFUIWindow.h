@class NSString, OFUIWindowDraggingGestureRecognizer, OFUIWindowDraggingAutoscroll, OFUIWindowDraggingSession, NSMutableDictionary;

@interface OFUIWindow : UIWindow <UIGestureRecognizerDelegate> {
    NSMutableDictionary *_eventsTracking;
}

@property (retain, nonatomic) OFUIWindowDraggingSession *draggingSession;
@property (retain, nonatomic) OFUIWindowDraggingGestureRecognizer *draggingGestureRecognizer;
@property (retain, nonatomic) OFUIWindowDraggingAutoscroll *draggingAutoscroll;
@property (nonatomic) BOOL showTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0;
- (void)commonInit;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)isDragging;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)handleDragging:(id)a0;
- (void)cancelDragging;
- (id)beginDraggingItems:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 source:(id)a2;

@end
