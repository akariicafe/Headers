@interface SeymourUI.TightButton : UIButton

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (void)setContentHuggingPriority:(float)a0 forAxis:(long long)a1;

@end
