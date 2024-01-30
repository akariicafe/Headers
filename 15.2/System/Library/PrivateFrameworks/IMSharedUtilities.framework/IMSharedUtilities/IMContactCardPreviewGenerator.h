@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)vCardDataForURL:(id)a0;
+ (struct CGImage { } *)newMonogramImageForData:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1;
+ (double)contactMonogramDiameter;
+ (struct CGImage { } *)newContactCardPreviewFrom:(id)a0 previewURL:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (id)contactCardPreviewPayloadsDirectoryFrom:(id)a0 previewURL:(id)a1;
+ (struct CGImage { } *)monogramForFirstName:(id)a0 lastName:(id)a1;
+ (id)contactCardPreviewPayloadFileURLFrom:(id)a0 previewURL:(id)a1 withFileExtension:(id)a2;
+ (id)generateContactPlistFrom:(id)a0 previewURL:(id)a1 error:(id *)a2;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 previewURL:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (BOOL)supportsBlastDoor;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;

@end
