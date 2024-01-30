@class TLKSplitTitleContainer, NSString, NUIContainerGridView, TLKMultilineText, TLKImage, NUIContainerStackView, TLKLabel, TLKEmbossedLabel, TLKTextButton;
@protocol TLKSplitHeaderViewDelegate;

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) TLKTextButton *leadingButton;
@property (retain, nonatomic) TLKLabel *leadingTitleLabel;
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel;
@property (retain, nonatomic) TLKTextButton *trailingButton;
@property (retain, nonatomic) TLKLabel *trailingTitleLabel;
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel;
@property (retain, nonatomic) TLKSplitTitleContainer *titleContainerView;
@property (retain, nonatomic) NUIContainerStackView *subtitleStackView;
@property (retain, nonatomic) TLKLabel *subtitle1Label;
@property (retain, nonatomic) TLKEmbossedLabel *subtitle2Label;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKMultilineText *centerLeadingTitle;
@property (retain, nonatomic) TLKMultilineText *centerTrailingTitle;
@property (retain, nonatomic) TLKMultilineText *subtitle1;
@property (retain, nonatomic) TLKMultilineText *subtitle2;
@property (nonatomic) BOOL useLargeTitle;
@property (nonatomic) BOOL shouldBadgeSubtitle;
@property (nonatomic) BOOL useCompactWidth;
@property (nonatomic) BOOL isLeadingButtonEnabled;
@property (retain, nonatomic) TLKImage *leadingImage;
@property (retain, nonatomic) TLKMultilineText *leadingTitle;
@property (retain, nonatomic) TLKMultilineText *leadingSubtitle;
@property (nonatomic) BOOL isTrailingButtonEnabled;
@property (retain, nonatomic) TLKImage *trailingImage;
@property (retain, nonatomic) TLKMultilineText *trailingTitle;
@property (retain, nonatomic) TLKMultilineText *trailingSubtitle;
@property (weak) id<TLKSplitHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subtitleLabel;
- (id)titleLabel;
- (id)grid;
- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)firstRowOfViews;
- (id)thirdRowOfViews;
- (id)centerLeadingTitleLabel;
- (id)centerTrailingTitleLabel;
- (id)leadingImageInView;
- (void)observedPropertiesChanged;
- (void)performLeadingButtonSelector;
- (void)performTrailingButtonSelector;
- (BOOL)secondRowIsHidden;
- (id)secondRowOfViews;
- (id)setupContentView;
- (id)trailingImageInView;
- (BOOL)usesDefaultLayoutMargins;

@end
