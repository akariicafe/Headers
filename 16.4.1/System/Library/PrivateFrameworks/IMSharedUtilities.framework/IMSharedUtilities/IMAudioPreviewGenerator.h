@interface IMAudioPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)audioMedataForFileURL:(id)a0;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (BOOL)generatesMetadata;
+ (BOOL)generatesPreview;
+ (id)metadataExtension;
+ (BOOL)writesToDisk;

@end
