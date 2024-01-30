@class UIViewController, NSArray, NSMapTable, NUIContainerStackView, NSMutableSet, NSString, SearchUIHorizontallyScrollingMoreResultsButtonController;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIHorizontallyScrollingContainerView : NUIContentScrollView <NUIContainerViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) NUIContainerStackView *stackViewToScroll;
@property (retain, nonatomic) NSArray *buttonControllers;
@property (retain, nonatomic) SearchUIHorizontallyScrollingMoreResultsButtonController *seeMoreButtonController;
@property (retain, nonatomic) NSMutableSet *visibleResultsAlreadySentBack;
@property (retain, nonatomic) NSMapTable *buttonControllersForViews;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property double defaultArrangedSubviewWidth;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (copy, nonatomic) NSArray *scrollableCardSectionRowModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)scrollingButtonPressed:(id)a0;
- (double)widthForArrangedSubview:(id)a0;
- (void)sendVisibleFeedback;
- (void)scrollViewDidScroll:(id)a0;
- (void)modalViewControllerClosed;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
