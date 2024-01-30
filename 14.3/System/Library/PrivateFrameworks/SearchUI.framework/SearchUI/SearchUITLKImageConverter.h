@interface SearchUITLKImageConverter : NSObject

+ (id)imageForSFImage:(id)a0;
+ (id)imageForSFImage:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (unsigned long long)tlkCornerRoundingStyleForSFCornerRoundingStyle:(int)a0;
+ (BOOL)imageIsProbablyOpaque:(id)a0 tlkImage:(id)a1;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (BOOL)checkTransparencyForImageAtCorners:(struct CGImage { } *)a0 tlkImage:(id)a1 uiImage:(id)a2;
+ (BOOL)hasTransparencyAtPoint:(struct CGPoint { double x0; double x1; })a0 forCGImage:(struct CGImage { } *)a1;
+ (id)imagesForSFImages:(id)a0;

@end
