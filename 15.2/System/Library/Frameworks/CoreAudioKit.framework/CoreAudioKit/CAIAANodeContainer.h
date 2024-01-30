@interface CAIAANodeContainer : UIScrollView

@property long long numPages;

+ (void)initialize;

- (void)layoutSubviews;
- (double)minWidth;
- (double)contentWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
