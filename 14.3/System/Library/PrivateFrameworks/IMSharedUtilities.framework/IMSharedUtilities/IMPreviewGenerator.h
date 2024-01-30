@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)writesToDisk;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 outSize:(struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
+ (id)previewExtension;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledTargetRectForSize:(struct CGSize { double x0; double x1; })a0 andThumbnailSize:(struct CGSize { double x0; double x1; })a1;
+ (id)UTITypes;
+ (BOOL)shouldScaleUpPreview;
+ (struct CGSize { double x0; double x1; })thumbnailFillSizeForWidth:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)shouldShadePreview;
+ (double)maxUpScale;
+ (struct CGImage { } *)newCroppedAndRescaledImageFromImage:(struct CGImage { } *)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 targetPxSize:(struct CGSize { double x0; double x1; })a2;

@end
