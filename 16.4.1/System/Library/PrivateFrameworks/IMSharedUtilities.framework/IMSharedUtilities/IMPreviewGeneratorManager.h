@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject

@property (copy, nonatomic) NSDictionary *UTITypes;
@property (copy, nonatomic) NSDictionary *dynamicTypes;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (Class)_previewGeneratorClassForSourceURL:(id)a0;
- (BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)a0 previewURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 error:(id *)a4;
- (BOOL)generateAndPersistMapPreviewFromSourceURL:(id)a0 previewURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 error:(id *)a4;
- (BOOL)generateAndPersistMetadataFromSourceURL:(id)a0 destinationURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 error:(id *)a4;
- (BOOL)generateAndPersistPreviewFromSourceURL:(id)a0 previewURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 balloonBundleID:(id)a3 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a4 error:(id *)a5;
- (BOOL)movePreviewToDiskCache:(id)a0 previewURL:(id)a1 error:(id *)a2;
- (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
- (BOOL)persistPreviewToDiskCache:(struct CGImage { } *)a0 previewURL:(id)a1 error:(id *)a2;
- (Class)previewGeneratorClassForUTIType:(id)a0;
- (BOOL)sizePreviewFromSourceURL:(id)a0 size:(out struct CGSize { double x0; double x1; } *)a1 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;

@end
