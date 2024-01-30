@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 outSize:(struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
+ (Class)greenfieldUtilitiesClass;
+ (BOOL)_isAvailable;
+ (BOOL)decorateWatchfacePreview:(id)a0 andWriteToURL:(id)a1 imagePxSize:(struct CGSize { double x0; double x1; } *)a2;
+ (id)UTITypes;

@end
