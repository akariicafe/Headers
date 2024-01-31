@interface CNPhotoPickerImageWithEffectGenerator : NSObject

+ (id)coreImageFilterDisplayNames;
+ (id)coreImageFilterNames;
+ (id)displayNameForFilterNamed:(id)a0;
+ (id)imageByApplyingEffect:(id)a0 withContext:(id)a1 toImage:(id)a2 withSize:(struct CGSize { double x0; double x1; })a3;
+ (id)imageByApplyingEffect:(id)a0 withContext:(id)a1 toImageData:(id)a2;
+ (void)imagesByApplyingEffectsToImageData:(id)a0 withScaleFactor:(double)a1 originalImageScale:(double)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;

@end
