@class UIColor, NSArray, UIStackView, UIView, NSMutableArray, NSLayoutConstraint;

@interface HKLegendView : HKBorderLineView {
    UIStackView *_mainStack;
    NSMutableArray *_leftEntryViews;
    NSMutableArray *_rightEntryViews;
    UIView *_topDividerView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (retain, nonatomic) NSMutableArray *extensionViews;
@property (readonly, nonatomic) NSArray *leftEntries;
@property (readonly, nonatomic) NSArray *rightEntries;
@property (retain, nonatomic) UIColor *topBorderColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) BOOL opaqueBackground;
@property (retain, nonatomic) UIColor *lollipopColor;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })modifiedInsetsForOpaqueLegend:(BOOL)a0 originalInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (double)horizontalOffsetWithOpaque:(BOOL)a0;

- (void).cxx_destruct;
- (void)setLeftEntries:(id)a0 rightEntries:(id)a1;
- (id)initWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 opaqueBackground:(BOOL)a1;
- (void)showLollipopsWithSelectedValues:(id)a0;
- (void)hideLollipops;
- (void)_rebuildStackStructure;
- (void)_updateLegendLeftEntries:(id)a0 rightEntries:(id)a1;
- (void)_rebuildExtensionsWithStickLocations:(id)a0;

@end
