@interface CNAvatarImageUtilities : NSObject

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transparencyInsetsForImage:(id)a0 requiringFullOpacity:(BOOL)a1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromSize:(struct CGSize { double x0; double x1; })a1 toSize:(struct CGSize { double x0; double x1; })a2;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0 requiringFullOpacity:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSquareCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFitImageOfSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersectingSquareCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centeredSquareCropRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)croppedAndCenteredAvatarImageForImage:(id)a0 widthMultiplier:(double)a1;

@end
