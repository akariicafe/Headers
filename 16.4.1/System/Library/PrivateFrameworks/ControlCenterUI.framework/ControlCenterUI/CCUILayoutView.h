@class CCUILayoutOptions;
@protocol CCUILayoutViewLayoutSource;

@interface CCUILayoutView : CCUIScrollView {
    CCUILayoutOptions *_layoutOptions;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (weak, nonatomic) id<CCUILayoutViewLayoutSource> layoutSource;

- (void)setNeedsLayout;
- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutOptions:(id)a1;
- (void)didAddSubview:(id)a0;
- (double)_extraItemSpacingForItemAtPosition:(unsigned long long)a0 doubleMarginIndices:(id)a1 itemSpacing:(double)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x0; unsigned long long x1; } x0; struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)iterateLayoutSubviewsWithBlock:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)subviewsToLayout;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSubview:(id)a0;
- (id)_horizontalDoubleMarginIndices;
- (double)_totalExtraItemSpacingForDoubleMarginIndices:(id)a0 itemSpacing:(double)a1;
- (void).cxx_destruct;
- (id)_verticalDoubleMarginIndices;

@end
