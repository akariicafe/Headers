@class NSString, _UIPointerInteractionHoverGestureRecognizer, UIView, _UIPointerInteractionPressGestureRecognizer;
@protocol _UIPointerInteractionDriverSink;

@interface _UIPointerInteractionHoverDriver : NSObject <_UIPointerInteractionDriver> {
    id<_UIPointerInteractionDriverSink> _sink;
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;
    _UIPointerInteractionPressGestureRecognizer *_pressGestureRecognizer;
    struct { BOOL invalid; BOOL receivedUpdateWhilePointerDisabled; BOOL observing; } _flags;
}

@property (weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_pointerStateDidChange:(id)a0;
- (void)_handlePressGesture:(id)a0;
- (id)initWithSink:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_updateHover:(id)a0 forced:(BOOL)a1;
- (void)_handleHoverGesture:(id)a0;
- (void)_uninstallFromView:(id)a0;
- (void)invalidate;
- (void)_installToView:(id)a0;

@end
