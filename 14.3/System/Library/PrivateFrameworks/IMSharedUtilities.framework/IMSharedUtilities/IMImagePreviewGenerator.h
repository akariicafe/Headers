@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)writesToDisk;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 outSize:(struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
+ (struct CGImage { } *)cropAndScaleImageWithImageSource:(struct CGImageSource { } *)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1;
+ (struct CGImage { } *)newThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 imagePxSize:(struct CGSize { double x0; double x1; })a1 imageSource:(struct CGImageSource { } *)a2 scale:(double)a3;
+ (id)UTITypes;
+ (id)fetchUTITypes;

@end
