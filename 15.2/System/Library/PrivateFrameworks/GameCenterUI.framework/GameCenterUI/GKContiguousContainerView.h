@class NSArray, UIView;

@interface GKContiguousContainerView : UIView

@property (nonatomic) BOOL vertical;
@property (nonatomic) BOOL applyOrthogonalConstraints;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) UIView *baselineView;
@property (nonatomic) double overlap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;

+ (id)containerForViewsFontsLeadings:(id)a0 options:(long long)a1;
+ (id)containerViewForViews:(id)a0 overlap:(double)a1 vertical:(BOOL)a2;
+ (id)containerViewForViews:(id)a0 overlap:(double)a1 vertical:(BOOL)a2 applyOrthogonalConstraints:(BOOL)a3;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForBaselineLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)replaceSubviews:(id)a0;
- (void)_addContiguousSubviews:(id)a0;

@end
