@class TLKStackView, UIView, SearchUIAccessoryViewController, NSString, TLKDetailsView, SearchUIDetailedRowModel, NSMutableArray, SearchUILeadingViewController;
@protocol SearchUIDetailedViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate>

@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (retain, nonatomic) TLKStackView *innerContainer;
@property (retain, nonatomic) NSMutableArray *leadingViewControllers;
@property (retain, nonatomic) SearchUILeadingViewController *currentLeadingViewController;
@property (retain, nonatomic) TLKDetailsView *detailsView;
@property (retain, nonatomic) NSMutableArray *accessoryViewControllers;
@property (retain, nonatomic) SearchUIAccessoryViewController *currentAccessoryViewController;
@property (nonatomic) BOOL isVerticalAlignment;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIDetailedViewDelegate> buttonDelegate;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property BOOL isCompactWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bannerBadgeForRowModel:(id)a0;
+ (void)addViewIfNecessary:(id)a0 toStackView:(id)a1 removeFromStackView:(id)a2;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeedbackDelegate:(id)a0;
- (BOOL)arrangedViewMustCenter:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)footnoteButtonPressed;

@end
