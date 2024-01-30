@class UIView, NSArray, UIImage, OBImageView, OBAnimationView, OBTemplateHeaderDetailLabel, OBTemplateLabel, OBHeaderAccessoryButton;

@interface OBHeaderView : UIView {
    BOOL _usingSymbolImage;
}

@property (retain, nonatomic) OBAnimationView *animationView;
@property (retain, nonatomic) OBImageView *imageView;
@property (retain, nonatomic) UIView *topAssetContainer;
@property (retain, nonatomic) NSArray *topAssetContainerConstraints;
@property (retain, nonatomic) OBTemplateLabel *headerLabel;
@property (retain, nonatomic) OBTemplateLabel *subtitleLabel;
@property (retain, nonatomic) OBTemplateHeaderDetailLabel *detailLabel;
@property (retain, nonatomic) NSArray *imageViewConstraints;
@property (retain, nonatomic) NSArray *detailLabelConstraints;
@property (retain, nonatomic) NSArray *subtitleLabelConstraints;
@property (retain, nonatomic) OBHeaderAccessoryButton *accessoryButton;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) UIImage *originalIconImage;
@property (retain, nonatomic) UIView *customIconContainerView;
@property (nonatomic) BOOL underlineLinks;
@property (nonatomic) BOOL iconInheritsTint;
@property (nonatomic) BOOL allowFullWidthIcon;

- (id)headerFont;
- (id)_detailFont;
- (id)symbolConfiguration;
- (void)setIcon:(id)a0 accessibilityLabel:(id)a1;
- (id)_createImageView:(id)a0;
- (double)detailLabelToAccessoryButtonPadding;
- (double)bottomPadding;
- (id)_subtitleFont;
- (id)initWithTitle:(id)a0;
- (void)_insertAndLayoutImageViewIfNeeded;
- (id)title;
- (void)setLanguage:(id)a0;
- (id)initWithTitle:(id)a0 symbolName:(id)a1;
- (void)_updateConstraintsForSubtitle;
- (id)_createDetailLabelIfNeeded;
- (double)headerLabelToDetailAndSubtitleLabelPadding;
- (void)_animateDetailLabelAlpha:(double)a0 duration:(double)a1;
- (void)setDetailText:(id)a0;
- (void)removeDetailLabel;
- (void)_layoutTopAssetContainer;
- (void)setTitleHyphenationFactor:(float)a0;
- (double)iconHeight;
- (void).cxx_destruct;
- (double)_setupAssistantIconHeight;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)setDetailedTextHeader:(id)a0 detailedTextBody:(id)a1;
- (double)iconToHeaderLabelPadding;
- (void)traitCollectionDidChange:(id)a0;
- (void)setSymbol:(id)a0 accessibilityLabel:(id)a1;
- (void)setSubtitleText:(id)a0;
- (double)topPadding;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (void)addAccessoryButton:(id)a0;
- (id)_symbolIconForHeaderStyle:(id)a0 configuration:(id)a1;
- (void)extendedInitWithTitle:(id)a0 detailText:(id)a1;
- (void)setTitle:(id)a0;
- (void)removeAccessoryButton;
- (void)tintColorDidChange;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void)setTitleTrailingSymbol:(id)a0;
- (void)_updateConstraintsForDetailLabel;

@end
