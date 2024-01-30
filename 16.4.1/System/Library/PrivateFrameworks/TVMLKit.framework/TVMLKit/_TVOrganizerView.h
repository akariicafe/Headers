@class UIColor, NSArray, NSDictionary, NSString, UIView;

@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView *_lastFocusedView;
    UIView *_rightColumnDivider;
    UIView *_leftColumnDivider;
    double _showcaseFactor;
}

@property (copy, nonatomic) NSDictionary *divsByPosition;
@property (copy, nonatomic) NSDictionary *divSizesByPosition;
@property (retain, nonatomic) UIView *backgroundImageView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double columnDividerPadding;
@property (nonatomic) BOOL columnDividersEnabled;
@property (retain, nonatomic) UIColor *columnDividerColor;
@property (nonatomic) BOOL remembersLastFocusedItem;
@property (copy, nonatomic) NSArray *components;
@property (weak, nonatomic) UIView *preferredFocusedComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (struct CGSize { double x0; double x1; })_contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)_positionFromView:(id)a0;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)setComponentsNeedUpdate;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tv_alignmentInsetsForExpectedWidth:(double)a0;

@end
