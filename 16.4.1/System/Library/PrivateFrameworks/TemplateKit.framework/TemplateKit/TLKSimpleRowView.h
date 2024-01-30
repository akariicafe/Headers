@class TLKImageView, NUIContainerGridView, NSString, TLKLabel, TLKImage, TLKRichText;

@interface TLKSimpleRowView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKImageView *leadingImageView;
@property (retain, nonatomic) TLKLabel *leadingTitleLabel;
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel;
@property (retain, nonatomic) TLKLabel *trailingTitleLabel;
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel;
@property (retain, nonatomic) TLKImageView *trailingImageView;
@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) TLKImage *leadingImage;
@property (retain, nonatomic) TLKRichText *leadingTitle;
@property (retain, nonatomic) TLKRichText *leadingSubtitle;
@property (retain, nonatomic) TLKImage *trailingImage;
@property (retain, nonatomic) TLKRichText *trailingTitle;
@property (retain, nonatomic) TLKRichText *trailingSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyText:(id)a0 toLabel:(id)a1;
+ (double)naturalWidthOfLabel:(id)a0 inFittingSize:(struct CGSize { double x0; double x1; })a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (BOOL)hasSubtitles;
- (id)leadingTextView;
- (id)stringForLabel:(id)a0;
- (id)bottomRowViews;
- (id)fontForTextInLabel:(id)a0;
- (id)gridOfAllViews;
- (id)leadingSubtitleLabelString;
- (id)leadingTitleLabelFont;
- (id)leadingTitleLabelString;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)topRowViews;
- (id)trailingSubtitleLabelFont;
- (id)trailingSubtitleLabelString;
- (id)trailingTitleLabelFont;
- (id)trailingTitleLabelString;
- (BOOL)usesDefaultLayoutMargins;
- (double)widthOfColumnAtIndex:(unsigned long long)a0;

@end
