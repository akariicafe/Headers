@class SUMaskProvider;

@interface SUMaskedView : UIView

@property (retain, nonatomic) SUMaskProvider *maskProvider;

- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPath { } *)copyMaskPath;
- (void)_reloadMask;

@end
