@interface _UICursor : UIPointerShape

+ (id)cursorWithPath:(id)a0;
+ (id)beamWithPreferredLength:(double)a0 axis:(unsigned long long)a1;
+ (id)cursorWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)cursorWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)linkCursor;

@end
