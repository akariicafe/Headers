@interface _UIStepperButton : UIButton

@property (nonatomic, getter=isLeft) BOOL left;

- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)a0;
- (id)_systemDefaultFocusGroupDescriptor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
