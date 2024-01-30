@class UIColor, FMHorizontalRule;

@interface FMBorderedField : UIView

@property (nonatomic) BOOL isConfigured;
@property (retain, nonatomic) FMHorizontalRule *topRule;
@property (retain, nonatomic) FMHorizontalRule *bottomRule;
@property (retain, nonatomic) UIColor *borderColor;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (void)commonSetup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForInterfaceBuilder;

@end
