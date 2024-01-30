@class NSArray;

@interface ICTableColumnRowButton : UIButton

@property (retain, nonatomic) NSArray *columnOrRowIdentifiers;
@property (readonly, nonatomic) BOOL isColumn;
@property (readonly, nonatomic) BOOL isLTR;

- (void)updateConfiguration;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityContainer;
- (void)accessibilityDarkerSystemColorsStatusDidChange:(id)a0;
- (id)initAsColumn:(BOOL)a0 isLeftToRight:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })touchRect;

@end
