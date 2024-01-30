@class UIView, NSArray, UIImage, OBImageView, OBAnimationView, OBTemplateHeaderDetailLabel, OBTemplateLabel, OBHeaderAccessoryButton;

@interface OBHeaderView : UIView {
    BOOL _usingSymbolImage;
}

@property (retain, nonatomic) OBAnimationView *animationView;
@property (retain, nonatomic) OBImageView *imageView;
@property (retain, nonatomic) UIView *topAssetContainer;
@property (retain, nonatomic) NSArray *topAssetContainerConstraints;
@property (retain, nonatomic) OBTemplateLabel *headerLabel;
@property (retain, nonatomic) OBTemplateHeaderDetailLabel *detailLabel;
@property (retain, nonatomic) NSArray *imageViewConstraints;
@property (retain, nonatomic) NSArray *detailLabelConstraints;
@property (retain, nonatomic) OBHeaderAccessoryButton *accessoryButton;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) UIImage *originalIconImage;
@property (retain, nonatomic) UIView *customIconContainerView;
@property (nonatomic) BOOL iconInheritsTint;
@property (nonatomic) BOOL allowFullWidthIcon;

- (id)initWithTitle:(id)a0;
- (void)setLanguage:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void)tintColorDidChange;
- (double)topPadding;
- (void).cxx_destruct;
- (void)addAccessoryButton:(id)a0;
- (id)_detailFont;
- (void)setIcon:(id)a0 accessibilityLabel:(id)a1;
- (double)bottomPadding;
- (void)setTitle:(id)a0;
- (void)setTitleTrailingSymbol:(id)a0;
- (id)_symbolIconForHeaderStyle:(id)a0 configuration:(id)a1;
- (id)_createImageView:(id)a0;
- (id)headerFont;
- (void)extendedInitWithTitle:(id)a0 detailText:(id)a1;
- (id)_createDetailLabelIfNeeded;
- (void)_insertAndLayoutImageViewIfNeeded;
- (void)_updateConstraintsForDetailLabel;
- (void)setDetailedTextHeader:(id)a0 detailedTextBody:(id)a1;
- (double)iconHeight;
- (void)_layoutTopAssetContainer;
- (double)iconToHeaderLabelPadding;
- (double)headerLabelToDetailLabelPadding;
- (double)_setupAssistantIconHeight;
- (id)initWithTitle:(id)a0 symbolName:(id)a1;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (void)setSymbol:(id)a0 accessibilityLabel:(id)a1;
- (void)setTitleHyphenationFactor:(float)a0;
- (void)removeDetailLabel;
- (void)removeAccessoryButton;
- (double)detailLabelToAccessoryButtonPadding;
- (void)_animateDetailLabelAlpha:(double)a0 duration:(double)a1;
- (void)setDetailText:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (id)title;
- (id)symbolConfiguration;

@end
