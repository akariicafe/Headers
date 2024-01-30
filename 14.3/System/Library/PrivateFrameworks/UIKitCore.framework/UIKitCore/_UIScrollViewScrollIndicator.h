@class UIColor, NSString, UIView;

@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *roundedFillView;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) BOOL hasPointer;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long style;
@property (nonatomic) BOOL expandedForDirectManipulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_expandedIndicatorDimension;
+ (double)indicatorDimension;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cursorHitTestingInsets;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_offsetFillViewRectForExpandedState:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)_colorForStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutFillViewAnimated:(BOOL)a0;

@end
