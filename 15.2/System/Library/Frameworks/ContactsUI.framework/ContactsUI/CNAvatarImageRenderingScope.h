@interface CNAvatarImageRenderingScope : NSObject

+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 strokeWidth:(double)a2 strokeColor:(id)a3 rightToLeft:(BOOL)a4 style:(unsigned long long)a5 backgroundStyle:(unsigned long long)a6 color:(id)a7 maskedAvatarIndices:(id)a8;
+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rightToLeft:(BOOL)a2 style:(unsigned long long)a3;
+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rightToLeft:(BOOL)a2 style:(unsigned long long)a3 backgroundStyle:(unsigned long long)a4;
+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rightToLeft:(BOOL)a2 style:(unsigned long long)a3 color:(id)a4;
+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 strokeWidth:(double)a2 strokeColor:(id)a3 rightToLeft:(BOOL)a4 style:(unsigned long long)a5;
+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 strokeWidth:(double)a2 strokeColor:(id)a3 rightToLeft:(BOOL)a4 style:(unsigned long long)a5 color:(id)a6;

@end
