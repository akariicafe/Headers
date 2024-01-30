@class UIColor, UIPageControl, NSString, UIScrollView, NSMutableArray;
@protocol CAMSemanticStylePickerDelegate;

@interface CAMSemanticStylePicker : UIView <UIScrollViewDelegate>

@property (readonly, nonatomic) UIScrollView *_scrollView;
@property (readonly, nonatomic) NSMutableArray *_tileViews;
@property (readonly, nonatomic) NSMutableArray *_spacerViews;
@property (nonatomic, setter=_setSelectedTileExpanded:) BOOL _selectedTileExpanded;
@property (nonatomic, setter=_setExpandedAnimationCounter:) unsigned long long _expansionAnimationCounter;
@property (nonatomic, setter=_setNeedsUpdateContentOffset:) BOOL _needsUpdateContentOffset;
@property (readonly, nonatomic, getter=_isScrollActive) BOOL _scrollActive;
@property (nonatomic) unsigned long long selectedStyleIndex;
@property (nonatomic) unsigned long long numberOfStyles;
@property (nonatomic) BOOL expanded;
@property (nonatomic) long long material;
@property (nonatomic) UIColor *materialColor;
@property (weak, nonatomic) id<CAMSemanticStylePickerDelegate> delegate;
@property (nonatomic) double contentBottomMargin;
@property (readonly, nonatomic) UIPageControl *pageControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateScrollViewContentOffset;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })styleRectAtIndex:(unsigned long long)a0;
- (void)setMaterial:(long long)a0 withDuration:(double)a1;
- (void)_setSelectedStyleIndex:(unsigned long long)a0 shouldDelegate:(BOOL)a1 shouldUpdateLayout:(BOOL)a2 animated:(BOOL)a3;
- (void)_updateMaterialOpacityWithDuration:(double)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForIndex:(unsigned long long)a0;
- (void)_updateTileAlphas;

@end
