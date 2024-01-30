@class UIView;

@interface SUSplitView : UIView

@property (retain, nonatomic) UIView *firstView;
@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UIView *secondView;
@property (nonatomic) double splitPosition;
@property (nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic) double minimumPaneSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (double)_minimumPaneSizeForLayout;

@end
