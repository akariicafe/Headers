@class _UIDropSessionImpl, UIDragEvent, _UIInternalDraggingSessionDestination;
@protocol UIDragGestureRecognizerDelegate;

@interface UIDragGestureRecognizer : UIGestureRecognizer

@property (readonly, weak, nonatomic, getter=_dragEvent) UIDragEvent *dragEvent;
@property (weak, nonatomic) id<UIDragGestureRecognizerDelegate> delegate;
@property (readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination;
@property (readonly, nonatomic) _UIDropSessionImpl *dropSession;

- (BOOL)shouldReceiveEvent:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;

@end
