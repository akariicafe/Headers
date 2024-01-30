@class UIHoverGestureRecognizer, NSString, UIView, UILongPressGestureRecognizer;
@protocol _UISelectionBandVisualProviding;

@interface UIBandSelectionInteraction : NSObject <UIInteraction_Internal, UIPointerInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction> {
    unsigned long long _internalState;
    struct CGPoint { double x; double y; } _initialLocation;
}

@property (copy, nonatomic) id /* block */ selectionHandler;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGR;
@property (retain, nonatomic) UILongPressGestureRecognizer *pressGR;
@property (retain, nonatomic) id<_UISelectionBandVisualProviding> visualProvider;
@property (nonatomic) BOOL _debugUIEnabled;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionRect;
@property (readonly, nonatomic) long long initialModifierFlags;
@property (copy, nonatomic) id /* block */ shouldBeginHandler;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePressGesture:(id)a0;
- (void)_handleHoverGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })_locationInView:(id)a0;
- (void)_updateInteractionEnabled;
- (void)_handleDidBegin;
- (BOOL)_gestureRecognizer:(id)a0 canBePreventedByGestureRecognizer:(id)a1;
- (void)_updateDebugUIWithGesture:(id)a0;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (BOOL)_isSelecting;
- (void).cxx_destruct;
- (void)_callHandlerWithState:(long long)a0;
- (BOOL)_gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithSelectionHandler:(id /* block */)a0;
- (void)_handleDidMove;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionRectWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_handleBeginEvent;
- (void)_handleDidEndFromState:(unsigned long long)a0;

@end
