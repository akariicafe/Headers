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

@property (readonly, nonatomic) NSArray *leftEntries;
@property (readonly, nonatomic) NSArray *rightEntries;
@property (retain, nonatomic) UIColor *topBorderColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (id)initWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (void)setLeftEntries:(id)a0 rightEntries:(id)a1;
- (void)_rebuildStackStructure;
- (void)_updateLegendLeftEntries:(id)a0 rightEntries:(id)a1;

@end
