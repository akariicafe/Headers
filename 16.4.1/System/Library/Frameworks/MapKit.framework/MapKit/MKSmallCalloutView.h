@class _MKSmallCalloutPassthroughButton, NSString, NSArray, UILayoutGuide, UIView, _MKUILabel, NSLayoutConstraint;
@protocol _MKCalloutAccessoryView;

@interface MKSmallCalloutView : UIView {
    _MKUILabel *_titleLabel;
    _MKUILabel *_subtitleLabel;
    UIView<_MKCalloutAccessoryView> *_leftView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    UIView<_MKCalloutAccessoryView> *_externalDetailView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    UIView *_unmaskedContainerView;
    struct { double margin; double cornerRadius; double arrowBase; double arrowHeight; BOOL useRadialSmoothing; union { struct { double arrowBaseRadius; double arrowRadius; } radialSmoothing; struct { double arrowSmoothing; double arrowPointFactor; } nonRadialSmoothing; } ; BOOL alignDetailViewBaseline; BOOL scaleVerticalPaddingForDynamicType; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; } _metrics;
    BOOL _needsPreferredContentSizeUpdate;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;
    NSArray *_titleLabelConstraints;
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;
    NSLayoutConstraint *_titleBaselineFromTopConstraint;
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;
    UILayoutGuide *_centerContentLeadingGuide;
    UILayoutGuide *_centerContentTrailingGuide;
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;
    UILayoutGuide *_leftViewTopSpacer;
    UILayoutGuide *_leftViewLeftSpacer;
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;
    UILayoutGuide *_rightViewTopSpacer;
    UILayoutGuide *_rightViewRightSpacer;
    NSLayoutConstraint *_detailViewMinTopConstraint;
    NSLayoutConstraint *_detailViewBottomConstraint;
    NSLayoutConstraint *_detailViewTrailingConstraint;
}

@property (copy, nonatomic) NSString *calloutTitle;
@property (copy, nonatomic) NSString *calloutSubtitle;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *detailView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) double minimumWidth;
@property (nonatomic) double maximumWidth;
@property (readonly, nonatomic) UIView *titlesContainerView;
@property (nonatomic) BOOL parallaxEnabled;

- (void)_updatePreferredContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)_maskedContainerView;
- (void)_setNeedsUpdatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)beginMapsTransitionMovingSideways;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 metrics:(struct { double x0; double x1; double x2; double x3; BOOL x4; union { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } x5; BOOL x6; BOOL x7; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x8; })a1;
- (void)setCalloutSubtitle:(id)a0 animated:(BOOL)a1;
- (void)setDetailView:(id)a0 animated:(BOOL)a1;
- (void)setLeftView:(id)a0 animated:(BOOL)a1;
- (void)setRightView:(id)a0 animated:(BOOL)a1;

@end
