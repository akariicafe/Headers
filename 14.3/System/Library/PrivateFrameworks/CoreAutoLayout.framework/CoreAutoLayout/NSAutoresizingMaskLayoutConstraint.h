@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint

+ (id)constraintWithItem:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toItem:(id)a3 attribute:(long long)a4 multiplier:(double)a5 constant:(double)a6;
+ (id)constraintsWithAutoresizingMask:(unsigned long long)a0 subitem:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 superitem:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

- (int)_constraintType;
- (id)descriptionAccessory;
- (id)_viewForAutoresizingMask;

@end
