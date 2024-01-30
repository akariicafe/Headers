@class TLKStackView, NSString, TLKImage, TLKMultilineText, TLKRichText, TLKImageView, TLKLabel, TLKRoundedCornerLabel;

@interface TLKHeaderView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *trailingTextLabel;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKLabel *footnoteLabel;
@property (retain, nonatomic) TLKImageView *subtitleImageView;
@property (retain, nonatomic) TLKStackView *subtitleStackView;
@property (retain, nonatomic) TLKStackView *innerStackView;
@property (retain, nonatomic) TLKRoundedCornerLabel *roundedCornerLabel;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKRichText *subtitle;
@property (nonatomic) BOOL subtitleIsEmphasized;
@property (retain, nonatomic) TLKMultilineText *footnote;
@property (retain, nonatomic) TLKMultilineText *trailingText;
@property (retain, nonatomic) TLKImage *subtitleImage;
@property (retain, nonatomic) NSString *roundedBorderText;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL useCompactWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)hasImage;
- (void)didMoveToWindow;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (BOOL)usesDefaultLayoutMargins;
- (id)footnoteLabelText;
- (id)roundedCornerLabelText;

@end
