@interface CNUISnowglobeUtilities : NSObject

+ (struct CGImage { } *)roundedRectPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0 backgroundStyle:(unsigned long long)a1 scale:(double)a2;
+ (struct CGColor { } *)defaultBackgroundColor;
+ (struct CGSize { double x0; double x1; })sizeForImageAtIndex:(unsigned long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forItemCount:(unsigned long long)a2 scope:(id)a3;
+ (struct CGImage { } *)circularPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0 backgroundStyle:(unsigned long long)a1 scale:(double)a2;
+ (id)circularContainerLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(unsigned long long)a1;
+ (struct CGImage { } *)imageForCGImages:(struct CGImage **)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 itemCount:(long long)a2 scope:(id)a3;
+ (BOOL)enableGroupPhoto;
+ (id)layerForCGImages:(struct CGImage **)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forItemCount:(long long)a2 scope:(id)a3;
+ (struct CGImage { } *)imageForLayer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)roundedRectContainerLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(unsigned long long)a1;
+ (struct CGColor { } *)backgroundColorForBackgroundStyle:(unsigned long long)a0;
+ (id)containerLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(unsigned long long)a1;
+ (struct CGColor { } *)defaultDarkBackgroundColor;

@end
