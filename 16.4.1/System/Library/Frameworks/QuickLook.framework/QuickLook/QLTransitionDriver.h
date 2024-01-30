@class UIView, QLItem;
@protocol QLDismissGestureTracking;

@interface QLTransitionDriver : NSObject

@property struct CGSize { double width; double height; } transitionPreviewSize;
@property (retain) QLItem *transitionPreviewItem;
@property (retain) UIView *transitionContainer;
@property (retain) UIView *destinationView;
@property (retain) UIView *sourceView;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceViewFrame;
@property BOOL isSourceViewTransformed;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceViewBounds;
@property struct CGPoint { double x; double y; } sourceViewCenter;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } sourceViewTransform;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } uncroppedFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionContainerOriginalFrame;
@property BOOL transitionContainerMasksToBounds;
@property (retain) id<QLDismissGestureTracking> gestureTracker;
@property BOOL presenting;
@property double duration;
@property double topNavigationOffset;
@property double hostNavigationOffset;

- (void)tearDown;
- (void).cxx_destruct;
- (void)animateTransition;

@end
