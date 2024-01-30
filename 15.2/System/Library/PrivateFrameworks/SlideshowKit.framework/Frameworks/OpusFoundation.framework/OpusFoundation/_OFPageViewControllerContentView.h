@class UIPageControl;

@interface _OFPageViewControllerContentView : OFUIView

@property (readonly, nonatomic) UIPageControl *pageControl;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupPageControl:(id)a0;
- (void)invalidatePageViewController;
- (void)dealloc;

@end
