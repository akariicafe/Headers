@interface CNKFaceTimeInCallControlsDragController : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ inCallControlsView;
    void /* unknown type, empty encoding */ constraintsController;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ animation;
    void /* unknown type, empty encoding */ disabledScrollViews;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL isDragging;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handlePanGestureRecognizer:(id)a0;
- (id)initInCallControlsView:(id)a0 constraintsController:(id)a1;
- (void)resetGestureRecognizer;

@end
