@interface CNAvatarImageUtilities : NSObject

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transparencyInsetsForImage:(id)a0 requiringFullOpacity:(BOOL)a1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0 requiringFullOpacity:(BOOL)a1;
+ (id)croppedAndCenteredAvatarImageForImage:(id)a0 widthMultiplier:(double)a1;
+ (id)croppedAndCenteredAvatarImageForImage:(id)a0 usingTransparencyInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 widthMultiplier:(double)a2;

@end
