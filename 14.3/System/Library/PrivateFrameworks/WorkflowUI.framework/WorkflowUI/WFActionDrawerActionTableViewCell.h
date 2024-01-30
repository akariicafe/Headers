@class NSString, WFDragGestureRecognizer, WFAction, WFDragController, UIButton, WFActionDrawerCoordinator, UIViewController, WFModuleTitleView;

@interface WFActionDrawerActionTableViewCell : UITableViewCell <WFModuleTitleViewDelegate>

@property (retain, nonatomic) WFAction *action;
@property (weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) WFDragGestureRecognizer *dragRecognizer;
@property (retain, nonatomic) WFDragController *dragController;
@property (readonly, weak, nonatomic) WFModuleTitleView *titleView;
@property (retain, nonatomic) UIButton *infoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)infoButtonPressed;
- (void)configureWithAction:(id)a0 coordinator:(id)a1 viewController:(id)a2;

@end
