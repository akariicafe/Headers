@class UIView, NSString, CNAvatarCardActionsView, NSArray, UIImage, CNContactActionsController, CNAvatarCardController, NSLayoutConstraint;
@protocol CNAvatarCardActionListOrbSupport, CNAvatarCardViewControllerDelegate, CNAvatarCardActionListController;

@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNContactActionsControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate>

@property (retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) NSArray *verticalConstraints;
@property (nonatomic) double borderMargin;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIView *actionsListView;
@property (copy, nonatomic) NSArray *actionCategories;
@property (weak, nonatomic) CNAvatarCardController *cardController;
@property (weak, nonatomic) id<CNAvatarCardViewControllerDelegate> delegate;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) BOOL headerOnTop;
@property (nonatomic) BOOL actionsReversed;
@property (nonatomic) BOOL dismissesBeforePerforming;
@property (nonatomic) BOOL bypassActionValidation;
@property (readonly, nonatomic) id<CNAvatarCardActionListController> actionListController;
@property (readonly, nonatomic) id<CNAvatarCardActionListOrbSupport> actionListViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *transitioningView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitioningFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitioningContentFrame;
@property (readonly, nonatomic) UIImage *transitioningImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitioningImageFrame;
@property BOOL transitioningImageVisible;
@property (readonly, nonatomic) UIView *transitioningContentView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)viewForTouchContinuation;
- (id)initWithContacts:(id)a0;
- (void)updateViewConstraints;
- (void)refreshActions;
- (void)viewWillAppear:(BOOL)a0;
- (id)actionsView;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cardActionsView:(id)a0 didShowActions:(id)a1;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (id)cardActionsView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (void)dismissViewControllerForCardActionsView:(id)a0 animated:(BOOL)a1;
- (id)viewControllerForCardActionsView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_photoFrameInView:(id)a0;
- (void)willAddActionsViewToHierarchy;
- (void)didAddActionsViewToHierarchy;
- (void)updateActionsControllerHeightConstraint;
- (void)updateActionsViewBackgroundColor;
- (void)_updatePreferredSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
