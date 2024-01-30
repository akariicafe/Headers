@class UIView, NSString, TPKContent, UITraitCollection, NSArray, NSBundle, NSLayoutConstraint, UIColor;
@protocol TPKContentViewDelegate;

@interface TPKContentView : UIView {
    BOOL _isPopOverView;
    UITraitCollection *__preferredTraitCollection;
    long long __cacheHorizontalSizeClass;
    NSString *__cacheContentSizeCategory;
    UIView *__bottomSeparatorView;
    NSLayoutConstraint *__bottomSeparatorHeightConstraint;
    NSLayoutConstraint *__contentViewBottomConstraint;
    NSLayoutConstraint *__contentViewTopConstraint;
    NSLayoutConstraint *__compactSizeClassLeadingConstraint;
    NSLayoutConstraint *__compactSizeClassTrailingConstraint;
    NSArray *_compactSizeClassHorizontalConstraints;
    NSArray *_regularSizeClassHorizontalConstraints;
}

@property (nonatomic) BOOL asPopover;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic, getter=_isAccessbilitySizeCategory) BOOL _accessbilitySizeCategory;
@property (weak, nonatomic) id<TPKContentViewDelegate> _delegate;
@property (copy, nonatomic) UIView *_contentView;
@property (copy, nonatomic) NSBundle *_frameworkBundle;
@property (copy, nonatomic) TPKContent *content;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } defaultDirectionalEdgeInsets;
@property (nonatomic) BOOL displaysBottomSeparator;
@property (nonatomic) struct CGSize { double width; double height; } preferredMicaLayerSize;
@property (copy, nonatomic) UIColor *contentBackgroundColor;
@property (copy, nonatomic) UIColor *preferredIconImageTintColor;
@property (copy, nonatomic) UIColor *preferredActionTintColor;

+ (struct CGSize { double x0; double x1; })defaultMicaSize;
+ (id)SiriIconWithTraitCollection:(id)a0;
+ (id)TipsIconWithTraitCollection:(id)a0;
+ (id)systemImageWithIdentifier:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredIconImageSizeWithImageSize:(struct CGSize { double x0; double x1; })a0 isSymbol:(BOOL)a1;

- (void)_contentSizeCategoryDidChange;
- (double)topPadding;
- (id)init;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (id)layoutIdentifier;
- (void)dealloc;
- (void)updateConstraints;
- (double)bottomPadding;
- (id)_preferredTraitCollection;
- (void)traitCollectionDidChange:(id)a0;
- (id)_currentContentSizeCategory;
- (double)sidePadding;
- (void)setContentBackgroundColor:(id)a0;
- (void)updateHorizontalContraints;
- (void)_configureAsPopover:(BOOL)a0 withContent:(id)a1;
- (BOOL)_isHorizontalSizeClassChanged:(id)a0;
- (BOOL)_isAccessibilitySizeCategoryChanged;
- (void)_accessibilitySizeCategoryDidChange;
- (BOOL)_isContentSizeAccessibilityCategory;
- (id)contentBackgroundColor;
- (id)_initWithContent:(id)a0 asPopover:(BOOL)a1;
- (void)_setPreferredTraitCollection:(id)a0;
- (id)_currentContentLanguage;
- (BOOL)_isContentSizeCategoryChanged;

@end
