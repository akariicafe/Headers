@class UILabel, UIButton, UIView;
@protocol SBIconWidgetIntroductionDelegate;

@interface SBIconWidgetIntroductionPopoverView : UIView

@property (retain, nonatomic) UIView *popoverView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) UIView *verticalDividerLine;
@property (weak, nonatomic) id<SBIconWidgetIntroductionDelegate> delegate;

+ (struct CGSize { double x0; double x1; })contentSize:(BOOL)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)editButtonTapped:(id)a0;
- (void)setUpViews:(BOOL)a0;
- (void)setUpButtonsInPopoverView:(id)a0 vibrantContentView:(id)a1 layoutGuide:(id)a2 vertical:(BOOL)a3;
- (void)okButtonTapped:(id)a0;
- (id)editButtonLabelText;
- (id)initWithDelegate:(id)a0 vertical:(BOOL)a1;

@end
