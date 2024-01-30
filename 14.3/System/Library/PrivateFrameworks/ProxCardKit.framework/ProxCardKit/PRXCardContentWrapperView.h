@class PRXCardContentView, NSString, NSArray, UIView, PRXButton, NSLayoutConstraint, UILabel, UIScrollView;

@interface PRXCardContentWrapperView : UIView <PRXCardContentViewDelegate, UIScrollViewDelegate>

@property (readonly, nonatomic) PRXCardContentView *contentView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *bottomKeyline;
@property (readonly, nonatomic) UIView *bottomTray;
@property (readonly, nonatomic) UILabel *bottomTrayLabel;
@property (readonly, nonatomic) UIView *topKeyline;
@property (readonly, nonatomic) UIView *titleContainer;
@property (readonly, nonatomic) UILabel *scrolledTitleLabel;
@property (copy, nonatomic) NSArray *buttonConstraints;
@property (copy, nonatomic) NSArray *bottomTrayTitleConstraints;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomAnchor;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) UIView *activityIndicator;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bottomTrayTitle;
@property (retain, nonatomic) PRXButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateConstraints;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)scrollToBottom;
- (void)_updateScrollViewBottomConstraint;

@end
