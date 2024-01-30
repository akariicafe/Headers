@interface IMOrderPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

+ (id)temporaryDirectory;
+ (id)UTITypes;
+ (id)_dictionaryRepresentationForColor:(id)a0;
+ (id)_dictionaryRepresentationForOrderText:(id)a0;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (BOOL)generatesMetadata;
+ (BOOL)generatesPreview;
+ (id)metadataExtension;
+ (id)previewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;

@end
