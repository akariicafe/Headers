@class NSDictionary, NSHashTable, UIView, UIGestureRecognizer, UIViewController;
@protocol WFDragCoordinator;

@interface WFDragController : NSObject

@property (weak, nonatomic) UIViewController *initialViewController;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSHashTable *currentViewControllers;
@property (readonly, weak, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly, weak, nonatomic) id<WFDragCoordinator> coordinator;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL removedOnCompletion;
@property (copy, nonatomic) NSDictionary *eventDictionary;

- (void)updateView;
- (void).cxx_destruct;
- (void)reset;
- (void)loadView;
- (BOOL)isViewLoaded;
- (id)initWithGestureRecognizer:(id)a0;
- (void)updateCurrentViewControllers;
- (struct CGPoint { double x0; double x1; })locationOfViewInView:(id)a0;
- (void)gestureRecognizerAction;
- (BOOL)dragController:(id)a0 shouldAcceptViewWithCompletion:(id /* block */)a1;
- (void)didEnterViewController:(id)a0;
- (void)didExitViewController:(id)a0;
- (void)didMoveInViewControllers:(id)a0;

@end
