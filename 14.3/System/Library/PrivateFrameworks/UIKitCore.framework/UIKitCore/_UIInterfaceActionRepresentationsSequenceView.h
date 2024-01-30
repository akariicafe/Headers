@class UIInterfaceActionVisualStyle, _UIInterfaceActionSeparatableSequenceView, NSArray, NSLayoutConstraint;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {
    long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
}

@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (readonly, nonatomic) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic) NSArray *arrangedActionRepresentationViews;
@property (nonatomic) long long actionLayoutAxis;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) BOOL visualCornerForcedOverride;

- (void)_notifyDidScroll;
- (void)_applyVisualStyle;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_minimumNumberOfRowsRequiredVisible;
- (void).cxx_destruct;
- (void)_loadDefaultSizingConstraints;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (BOOL)_isHorizontalLayout;
- (void)updateConstraints;
- (void)_enableSeparatedContentSequenceViewToFit;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_updateMinimumHeightConstraint;
- (void)_willUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (id)initWithVisualStyle:(id)a0;
- (double)fittingWidthForLayoutAxis:(long long)a0;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)reloadDisplayedContentVisualStyle;
- (struct CGSize { double x0; double x1; })_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize { double x0; double x1; })a0;
- (double)_contentFitCanScrollThreshold;

@end
