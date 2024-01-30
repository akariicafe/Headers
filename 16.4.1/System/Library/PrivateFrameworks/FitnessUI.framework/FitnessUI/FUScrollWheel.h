@class UIFont, NSString, NSMutableDictionary, UIImageView, UIScrollView, NSMutableArray, UIView;
@protocol FUScrollWheelDataSource, FUScrollWheelDelegate;

@interface FUScrollWheel : UIView <UIScrollViewDelegate> {
    NSMutableArray *_reusableLabelsQueue;
    NSMutableDictionary *_usedLabels;
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousRange;
    unsigned long long _numberOfRows;
    double _scrollWheelLabelHeight;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    UIImageView *_maskLayer;
    BOOL _shouldRegenerateOpacityMask;
    BOOL _loaded;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double scrollWheelLabelPageSize;
@property (weak, nonatomic) id<FUScrollWheelDataSource> dataSource;
@property (weak, nonatomic) id<FUScrollWheelDelegate> delegate;
@property (nonatomic) long long itemTitleAligmnent;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_layoutScrollView;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfRows;
- (double)_startingLocation;
- (void)_alertDidChangeToCurrentIndex:(unsigned long long)a0;
- (id)_dequeueLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelAtIndex:(unsigned long long)a0;
- (void)_generateOpacityMask;
- (void)_recycleAllLabels;
- (void)_recycleLabel:(id)a0 forKey:(id)a1;
- (void)_reuseLabelsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_setActiveScrollwheelIfNotActive;
- (id)_textForLabelAtIndex:(unsigned long long)a0;
- (void)_textSizeDidChange;
- (id)_titleForItemAtIndex:(unsigned long long)a0;
- (double)_yPositionForLabelAtIndex:(unsigned long long)a0;
- (void)setActiveScrollWheel;
- (void)setCurrentIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end
