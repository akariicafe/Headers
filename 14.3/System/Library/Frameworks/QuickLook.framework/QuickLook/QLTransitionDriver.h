@class UIView, QLItem;
@protocol QLDismissGestureTracking;

@interface QLTransitionDriver : NSObject

@property struct CGSize { double width; double height; } transitionPreviewSize;
@property (retain) QLItem *transitionPreviewItem;
@property (retain) UIView *transitionContainer;
@property (retain) UIView *destinationView;
@property (retain) UIView *sourceView;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceViewFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } uncroppedFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionContainerOriginalFrame;
@property BOOL transitionContainerMasksToBounds;
@property (retain) id<QLDismissGestureTracking> gestureTracker;
@property BOOL presenting;
@property double duration;
@property double topNavigationOffset;
@property double hostNavigationOffset;

- (void).cxx_destruct;
- (void)animateTransition;
- (void)tearDown;
- (void)animateFinishTransition;

@end
