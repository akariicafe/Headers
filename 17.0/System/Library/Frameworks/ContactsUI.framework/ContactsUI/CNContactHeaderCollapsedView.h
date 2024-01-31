@class CNContactFormatter, CAGradientLayer, NSString, CNContactActionsContainerView, UIView;

@interface CNContactHeaderCollapsedView : CNContactHeaderView

@property (retain, nonatomic) UIView *gradientLayerContainerView;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (nonatomic) double labelsHeight;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) NSString *alternateName;
@property (nonatomic) BOOL usesBrandedCallFormat;
@property (retain, nonatomic) CNContactActionsContainerView *actionsWrapperView;

+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)collapsedContactHeaderViewWithContact:(id)a0 showingNavBar:(BOOL)a1 monogramOnly:(BOOL)a2 delegate:(id)a3;

- (double)height;
- (void)copy:(id)a0;
- (void)updateConstraints;
- (double)minHeight;
- (double)maxHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setAvatarStyle:(unsigned long long)a0;
- (void)updateFontSizes;
- (id)_headerStringForContacts:(id)a0;
- (void)_updatePhotoView;
- (void)assignImageColorsToAvatarBackgroundView:(id)a0 horizontal:(BOOL)a1;
- (unsigned long long)avatarStyle;
- (void)calculateLabelSizes;
- (void)calculateLabelSizesIfNeeded;
- (void)didFinishUsing;
- (void)disablePhotoTapGesture;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 delegate:(id)a4;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (void)setDefaultLabelColors;
- (void)setNameTextAttributes:(id)a0;
- (void)setUpNameLabel;
- (void)setupBackgroundGradientLayer;
- (void)showLabelAndAvatar:(BOOL)a0 animated:(BOOL)a1;
- (void)updateBackgroundWithGradientColors:(id)a0 horizontal:(BOOL)a1;
- (void)updateBackgroundWithPosterSnapshotImage:(id)a0;
- (void)updateLabelColorsForImageColors:(id)a0;
- (void)updateSizeDependentAttributes;

@end
