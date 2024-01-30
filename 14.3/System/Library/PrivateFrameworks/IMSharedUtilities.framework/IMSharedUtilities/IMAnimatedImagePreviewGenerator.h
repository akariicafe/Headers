@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)writesToDisk;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 outSize:(struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
+ (id)UTITypes;

@end
