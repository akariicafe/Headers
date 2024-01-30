@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer

@property (readonly, nonatomic) long long tapCategory;
@property (nonatomic) BOOL failWhenTappingInBars;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_setDelegate:(id)a0;
- (id)description;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setDelegate:(id)a0;
- (long long)_categoryForTapLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
