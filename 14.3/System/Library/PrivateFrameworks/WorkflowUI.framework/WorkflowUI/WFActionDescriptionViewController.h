@class NSString, WFActionDocumentationView, WFActionDrawerCoordinator, WFAction, UIButton, WFActionDrawerState, WFActionDescriptionTitleView, UIVisualEffectView, UIScrollView;

@interface WFActionDescriptionViewController : UIViewController <UIScrollViewDelegate, WFActionDocumentationViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>

@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (readonly, nonatomic) WFActionDescriptionTitleView *titleView;
@property (readonly, nonatomic) UIButton *dismissButton;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) WFActionDocumentationView *documentationView;
@property (weak, nonatomic) UIVisualEffectView *blurView;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WFActionDrawerState *state;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;
- (void)actionDocumentationViewDidSelectAddToWorkflowWithAction:(id)a0;
- (id)initWithAction:(id)a0 coordinator:(id)a1;

@end
