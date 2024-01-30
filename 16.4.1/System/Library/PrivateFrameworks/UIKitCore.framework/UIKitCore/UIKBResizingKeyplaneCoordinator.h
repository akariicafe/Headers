@class UIColor, NSString, _UIDynamicAnimationGroup, UIView, UIPanGestureRecognizer;
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate> {
    double _prevResizingOffset;
    double _foregroundOpacity;
    _UIDynamicAnimationGroup *_resizingAnimationGroup;
    UIView *_grabber;
    UIColor *_grabberColor;
    BOOL _isResizing;
}

@property (weak, nonatomic) id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate;
@property (readonly, nonatomic) double resizingOffset;
@property (readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly, nonatomic) BOOL isResizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)savedResizingOffset;

- (void)updateGestureRecognizers;
- (void)setRenderConfig:(id)a0;
- (void)uninstallGestureRecognizers;
- (void)dimKeys:(id)a0;
- (void)saveResizingStopIndex:(unsigned long long)a0;
- (void)updateGrabber;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reloadResizingOffset;
- (void)stopResizing;
- (id)init;
- (void).cxx_destruct;
- (void)handleResizeGesture:(id)a0;
- (void)resizeKeyplaneWithOffset:(double)a0 andRedraw:(BOOL)a1;

@end
