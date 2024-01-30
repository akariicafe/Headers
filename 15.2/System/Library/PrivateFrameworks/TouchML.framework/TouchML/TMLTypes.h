@interface TMLTypes : NSObject

+ (id)convertPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)convertSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isNil:(id)a0;
+ (id)convertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)convertOffset:(struct UIOffset { double x0; double x1; })a0;

@end
