@class CKAnimatedImage, CKBrowserDragStickerView, NSString, UIView, UIPanGestureRecognizer, UILongPressGestureRecognizer;
@protocol CKBrowserDragViewControllerDelegate;

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) CKAnimatedImage *dragImage;
@property (retain, nonatomic) CKBrowserDragStickerView *normalDragView;
@property (retain, nonatomic) CKBrowserDragStickerView *keyboardDragView;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (retain, nonatomic) UIPanGestureRecognizer *keyboardPanGestureRecognizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardSourceRect;
@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (nonatomic) struct CGPoint { double x; double y; } keyboardAnchorOffset;
@property (nonatomic) double rotationAngle;
@property (nonatomic) struct CGPoint { double x; double y; } previousPanLocationInView;
@property (nonatomic) struct CGPoint { double x; double y; } previousPanLocationInKeyboardView;
@property (nonatomic) BOOL hasMovedToWindow;
@property (weak, nonatomic) id<CKBrowserDragViewControllerDelegate> delegate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } dragViewCenter;
@property (readonly, nonatomic) double dragViewRotation;
@property (readonly, nonatomic) double dragViewScale;
@property (readonly, nonatomic) double absoluteScale;
@property (nonatomic) BOOL canRotate;
@property (nonatomic) BOOL canScale;
@property (nonatomic) BOOL canPeel;
@property (weak, nonatomic) UIView *keyboardWindowSourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsForceTouch;

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_orbScalingEnabled;
- (void)_reversePeelAnimationToPoint:(struct CGPoint { double x0; double x1; })a0 keyboardPoint:(struct CGPoint { double x0; double x1; })a1 forPlacement:(BOOL)a2 shouldShrink:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)animateBackToSourceCompletionBlock:(id /* block */)a0;
- (void)animatePlacementAtPoint:(struct CGPoint { double x0; double x1; })a0 shouldShrink:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)commitDrag;
- (void)gestureRecognized:(id)a0;
- (id)initWithDragImage:(id)a0 inSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSourcePoint:(struct CGPoint { double x0; double x1; })a2 keyboardSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 keyboardSourcePoint:(struct CGPoint { double x0; double x1; })a4 withGestureRecognizer:(id)a5;
- (struct CGPoint { double x0; double x1; })keyboardDragViewCenter;
- (void)manuallyInitializeDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)manuallyUpdateDragPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)panGestureRecognized:(id)a0;
- (void)setPlusImageViewHidden:(BOOL)a0;

@end
