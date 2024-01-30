@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (struct CGImage { } *)_blastdoorPreviewForFileAtURL:(id)a0 maxPxWidth:(double)a1 scale:(double)a2 isScreenshot:(BOOL *)a3 error:(id *)a4;
+ (BOOL)_getUncroppedSizeForImageAtURL:(id)a0 scale:(double)a1 withImageSizeInPx:(struct CGSize { double x0; double x1; })a2 maximumSizeInPx:(struct CGSize { double x0; double x1; })a3 minimumSizeInPx:(struct CGSize { double x0; double x1; })a4 previewSize:(struct CGSize { double x0; double x1; } *)a5;
+ (struct CGImage { } *)_newCroppedAndScaledImageWithImageSource:(struct CGImageSource { } *)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1;
+ (id)fetchUTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 balloonBundleID:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 outSize:(struct CGSize { double x0; double x1; } *)a3 error:(id *)a4;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (struct CGImage { } *)newThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 imagePxSize:(struct CGSize { double x0; double x1; })a1 imageSource:(struct CGImageSource { } *)a2 scale:(double)a3;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (BOOL)writesToDisk;

@end
