@interface CNUISnowglobeUtilities : NSObject

+ (struct CGColor { } *)backgroundColorForBackgroundStyle:(unsigned long long)a0;
+ (struct CGImage { } *)circularPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0 backgroundStyle:(unsigned long long)a1 scale:(double)a2;
+ (struct CGImage { } *)imageForAvatarImages:(struct CGImage **)a0 badgeImages:(struct CGImage **)a1 badgeTypes:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 itemCount:(long long)a4 scope:(id)a5;
+ (struct CGImage { } *)imageForLayer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)enableGroupPhoto;
+ (id)avatarLayerForCGImages:(struct CGImage **)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forItemCount:(long long)a2 scope:(id)a3;
+ (id)containerLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(unsigned long long)a1;
+ (struct CGImage { } *)roundedRectPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0 backgroundStyle:(unsigned long long)a1 scale:(double)a2;
+ (struct CGSize { double x0; double x1; })sizeForImageAtIndex:(unsigned long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forItemCount:(unsigned long long)a2 scope:(id)a3;
+ (struct CGColor { } *)defaultBackgroundColor;
+ (id)circularContainerLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(unsigned long long)a1;
+ (struct CGColor { } *)defaultDarkBackgroundColor;
+ (id)roundedRectContainerLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(unsigned long long)a1;

@end
