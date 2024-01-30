@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (BOOL)supportsBlastDoor;
+ (id)contactCardPreviewPayloadFileURLFrom:(id)a0 previewURL:(id)a1 withFileExtension:(id)a2;
+ (id)contactCardPreviewPayloadsDirectoryFrom:(id)a0 previewURL:(id)a1;
+ (double)contactMonogramDiameter;
+ (id)generateContactPlistFrom:(id)a0 previewURL:(id)a1 error:(id *)a2;
+ (struct CGImage { } *)monogramForFirstName:(id)a0 lastName:(id)a1;
+ (struct CGImage { } *)newContactCardPreviewFrom:(id)a0 previewURL:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (struct CGImage { } *)newMonogramImageForData:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 previewURL:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (id)vCardDataForURL:(id)a0;

@end
