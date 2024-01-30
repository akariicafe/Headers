@interface VUIGraphicsImageRenderer : NSObject

+ (id)preferredFormat;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 actions:(id /* block */)a2;
+ (id)formatWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 cgContextActions:(id /* block */)a2;
+ (id)formatWithUIImage:(id)a0;
+ (id)decodedImage:(id)a0 opaque:(BOOL)a1;

@end
