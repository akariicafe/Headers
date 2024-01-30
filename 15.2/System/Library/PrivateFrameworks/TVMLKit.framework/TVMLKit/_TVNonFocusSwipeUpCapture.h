@class NSString, UIView, UIPanGestureRecognizer;

@interface _TVNonFocusSwipeUpCapture : NSObject <UIGestureRecognizerDelegate> {
    UIView *_initiallyFocusedView;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
}

@property (readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
