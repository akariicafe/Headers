@class NSString, NUIContainerGridView, TLKMultilineText, TLKImage, TLKImageView, NUIContainerStackView, TLKLabel, TLKEmbossedLabel;

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) TLKImageView *leadingImageView;
@property (retain, nonatomic) TLKLabel *leadingTitleLabel;
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel;
@property (retain, nonatomic) TLKImageView *trailingImageView;
@property (retain, nonatomic) TLKLabel *trailingTitleLabel;
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) NUIContainerStackView *subtitleStackView;
@property (retain, nonatomic) TLKLabel *subtitle1Label;
@property (retain, nonatomic) TLKEmbossedLabel *subtitle2Label;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKMultilineText *subtitle1;
@property (retain, nonatomic) TLKMultilineText *subtitle2;
@property (nonatomic) BOOL useLargeTitle;
@property (nonatomic) BOOL shouldBadgeSubtitle;
@property (nonatomic) BOOL useCompactWidth;
@property (retain, nonatomic) TLKImage *leadingImage;
@property (retain, nonatomic) TLKMultilineText *leadingTitle;
@property (retain, nonatomic) TLKMultilineText *leadingSubtitle;
@property (retain, nonatomic) TLKImage *trailingImage;
@property (retain, nonatomic) TLKMultilineText *trailingTitle;
@property (retain, nonatomic) TLKMultilineText *trailingSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)grid;
- (void).cxx_destruct;
- (id)subtitleLabel;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (BOOL)usesDefaultLayoutMargins;
- (id)firstRowOfViews;
- (id)secondRowOfViews;
- (id)thirdRowOfViews;
- (BOOL)secondRowIsHidden;
- (id)leadingImageInView;
- (id)trailingImageInView;

@end
