@class UIFont, NSArray, UIView, NSMutableArray;

@interface _UIFocusFastScrollingIndexBarView : UIView {
    UIView *_indicatorView;
    double _preferredIndicatorWidth;
    double _preferredLabelFontSize;
    NSMutableArray *_backgroundLabels;
    NSMutableArray *_foregroundLabels;
    UIView *_foregroundWrapperView;
    UIView *_foregroundMaskView;
    long long _deflectedIndex;
    double _deflectionAmount;
    UIFont *_backgroundFont;
    UIFont *_foregroundFont;
    UIView *_emphasisBackgroundView;
}

@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) long long focusProminence;
@property (nonatomic) struct CGPoint { double x; double y; } minimumContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } maximumContentOffset;
@property (nonatomic) long long style;

- (void)layoutSubviews;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)_createLabels;
- (void)resetDeflection:(BOOL)a0;
- (void)setIndexOfDeflectedEntry:(long long)a0 amount:(double)a1;
- (void).cxx_destruct;
- (void)updateForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_indicatorShadowPath;
- (void)_showNormalFocusProminence;
- (void)_determinePreferredSizes;
- (void)_showReducedFocusProminence;
- (id)_backgroundLabelTextColor;
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateEmphasisBackgroundColor;
- (BOOL)_shouldUseDarkAppearance;
- (id)_upperEntryForOffset:(double)a0;
- (id)_lowerEntryForOffset:(double)a0;
- (void)createEmphasisBackgroundIfNecessary;
- (void)toggleEmphasisBackgroundVisible:(BOOL)a0;
- (void)destroyEmphasisBackgroundIfNecessary;
- (void)_updateColors;
- (id)_backgroundFont;
- (id)_foregroundFont;

@end
