@class UIColor, UIImageView;

@interface FMRule : UIView

@property (nonatomic) BOOL leading;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImageView *imageView;

+ (id)imageWithColor:(id)a0 leading:(BOOL)a1;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForInterfaceBuilder;
- (void)commonSetup;

@end
