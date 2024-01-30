@class CAGradientLayer, NSString, _TVCollectionView, IKColor, UIView;

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerFrame;
    UIView *_selectingView;
    double _showcaseFactor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _footerFrame;
    CAGradientLayer *_gradientLayer;
    struct { BOOL respondsToAugmentedSelectionFrameForFrame; } _collectionViewFlags;
}

@property (nonatomic, getter=isHeaderFocused) BOOL headerFocused;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) _TVCollectionView *collectionView;
@property (nonatomic, getter=isCentered) BOOL centered;
@property (nonatomic) BOOL headerCanBecomeFocused;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic) struct TVShowcaseConfig { long long flavor; long long transition; double inset; } showcaseConfig;
@property (nonatomic, getter=isHeaderAuxiliarySelecting) BOOL headerAuxiliarySelecting;
@property (nonatomic, getter=isHeaderFloating) BOOL headerFloating;
@property (nonatomic, getter=isHeaderHidden) BOOL headerHidden;
@property (nonatomic) long long collectionGradientMask;
@property (retain, nonatomic) IKColor *ikBackgroundColor;
@property (retain, nonatomic) UIView *footerView;
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)gradientConfigForCollection:(id)a0 gradientMask:(long long)a1 gradientLengths:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 gradientInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a3 gradientBoundsInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a4;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateSubviews;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateGradientLayer;
- (void)tv_setShowcaseFactor:(double)a0;
- (void)setValue:(id)a0 forTVViewStyle:(id)a1;
- (id)rowMetricsForExpectedWidth:(double)a0 firstItemRowIndex:(long long *)a1;
- (id)showcaseRowMetricsForExpectedWidth:(double)a0;
- (void)reevaluateHeaderFrame;
- (id)_currentFooterView;
- (id)_currentHeaderView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedHeaderFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_adjustedPadding;
- (double)_adjustedShowcaseFactor;
- (double)_showcaseContentScaleForExpectedWidth:(double)a0;
- (id)_collectionRowMetricsForExpectedWidth:(double)a0 firstItemRowIndex:(long long *)a1 forShowcase:(BOOL)a2;
- (void)reevaluateFooterFrame;

@end
