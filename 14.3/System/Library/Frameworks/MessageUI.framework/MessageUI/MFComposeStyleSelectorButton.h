@interface MFComposeStyleSelectorButton : UIButton

@property (readonly, nonatomic) long long styleType;

+ (id)buttonWithStyleType:(long long)a0 target:(id)a1 action:(SEL)a2;

- (void)_commonInit;
- (id)_imageForTextStyleType:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
