@class UIColor, UIView;

@interface UISwipeActionDeleteScanlineView : UIView {
    UIView *_bottomLineWrapper;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property (copy, nonatomic) UIColor *deleteLineColor;

+ (double)lineHeight;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
