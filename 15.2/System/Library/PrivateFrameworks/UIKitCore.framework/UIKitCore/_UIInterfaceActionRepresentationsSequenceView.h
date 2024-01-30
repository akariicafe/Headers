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

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize { double x0; double x1; })a0;
- (double)_minimumNumberOfRowsRequiredVisible;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (void)_loadDefaultSizingConstraints;
- (void)_willUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateMinimumHeightConstraint;
- (BOOL)_isHorizontalLayout;
- (double)fittingWidthForLayoutAxis:(long long)a0;
- (void)_notifyDidScroll;
- (void)_applyVisualStyle;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithVisualStyle:(id)a0;
- (void)_disableSeparatedContentSequenceViewToFit;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)_contentFitCanScrollThreshold;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)reloadDisplayedContentVisualStyle;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_enableSeparatedContentSequenceViewToFit;

@end
