@class PXCuratedLibrarySectionHeaderLayoutSpec, NSString, UIImage, UITraitCollection, UIImageView, UIControl, PXCuratedLibraryOverlayButton, UIButton, UIVisualEffectView, UILabel;
@protocol PXImportHistorySectionHeaderViewDelegate, NSCopying;

@interface PXImportHistorySectionHeaderView : UICollectionReusableView <PXGReusableView> {
    struct { unsigned char headerViewDidPressActionButton : 1; } _delegateFlags;
}

@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clippingRect;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *spacerLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIButton *systemActionButton;
@property (retain, nonatomic) PXCuratedLibraryOverlayButton *backdropActionButton;
@property (readonly, nonatomic) UIControl *currentActionButton;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (readonly, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL inLayoutTransition;
@property (retain, nonatomic) UITraitCollection *selfSizingTraits;
@property (readonly, nonatomic) long long layoutMode;
@property (weak, nonatomic) id<PXImportHistorySectionHeaderViewDelegate> delegate;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) unsigned long long buttonStyle;
@property (nonatomic) BOOL showsActionButton;
@property (nonatomic) BOOL actionButtonEnabled;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *backdropButtonSpec;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) BOOL wantsBackground;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) double backgroundImageAlpha;
@property (nonatomic) double backgroundImageOverhang;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL supportsMultipleLinesInCompactLayout;
@property (readonly, nonatomic) double baselineToBottomSpacing;

- (void)_updateActionButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setActionButtonEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (id)traitCollection;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)becomeReusable;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (void)setWantsBackground:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateLabelFonts;
- (void)_updateLabelColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_disableRasterizeInAnimations;
- (void)_updateBackdropViewGroupName;
- (double)heightForSizeClass:(long long)a0 width:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)_actionButtonPressed:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_wantsActionButton;
- (void)_updateActionButtonEnabledAnimated:(BOOL)a0;
- (void)_updateActionButtonConfiguration;
- (void)_updateBackdropActionButton;
- (void)_updateSystemActionButton;
- (void)_updateWithCurrentTraits;
- (void)_updateLabelLineNumbers;
- (void)_updateSpacerLabelHiddenState;
- (long long)layoutModeForHorizontalSizeClass:(long long)a0;

@end
