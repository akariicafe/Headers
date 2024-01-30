@interface SBTitledHomeScreenButton : SBHomeScreenButton

@property (nonatomic) struct CGSize { double width; double height; } preferredContentFittingSize;

+ (id)contentImageWithTitle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundView:(id)a1;
- (struct CGSize { double x0; double x1; })_preferredContentFittingSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
