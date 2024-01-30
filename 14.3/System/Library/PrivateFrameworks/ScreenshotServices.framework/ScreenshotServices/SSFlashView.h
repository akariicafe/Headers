@interface SSFlashView : UIView

@property (nonatomic) unsigned long long style;

+ (double)expectedAnimationDurationForStyle:(unsigned long long)a0;
+ (id)flashViewForStyle:(unsigned long long)a0;
+ (Class)_flashViewClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flashWithCompletion:(id /* block */)a0;

@end
