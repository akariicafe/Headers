@interface NTKExtragalacticLayoutHelper : NSObject

+ (id)allCorners;
+ (unsigned long long)colForCorner:(unsigned long long)a0;
+ (struct CGPoint { double x0; double x1; })digitCenterPositionForCorner:(unsigned long long)a0 unifiedGlyphSize:(struct CGSize { double x0; double x1; })a1 cornerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCorner:(unsigned long long)a0 screenBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (unsigned long long)rowForCorner:(unsigned long long)a0;

@end
