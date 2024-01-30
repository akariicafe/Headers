@interface _UICursorStyle : UIPointerStyle

+ (id)styleWithHoverPreview:(id)a0;
+ (id)styleWithEffect:(id)a0 preview:(id)a1;
+ (id)styleWithHoverEffect:(long long)a0 preview:(id)a1;
+ (id)styleWithShape:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)beamStyleWithPreferredLength:(double)a0 axis:(unsigned long long)a1;
+ (id)styleWithCursor:(id)a0 constrainedAxes:(unsigned long long)a1;
+ (id)styleWithHiddenCursor;
+ (id)styleWithEffect:(id)a0 cursor:(id)a1;

@end
