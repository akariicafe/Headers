@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject

@property (copy, nonatomic) NSDictionary *UTITypes;
@property (copy, nonatomic) NSDictionary *dynamicTypes;

+ (id)sharedInstance;

- (BOOL)persistPreviewToDiskCache:(struct CGImage { } *)a0 previewURL:(id)a1 error:(id *)a2;
- (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
- (id)init;
- (void)dealloc;
- (Class)_previewGeneratorClassForSourceURL:(id)a0;
- (BOOL)generateAndPersistMapPreviewFromSourceURL:(id)a0 previewURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a3 error:(id *)a4;
- (BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)a0 previewURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a3 error:(id *)a4;
- (BOOL)movePreviewToDiskCache:(id)a0 previewURL:(id)a1 error:(id *)a2;
- (Class)previewGeneratorClassForUTIType:(id)a0;
- (BOOL)sizePreviewFromSourceURL:(id)a0 size:(out struct CGSize { double x0; double x1; } *)a1 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a2 error:(id *)a3;
- (BOOL)generateAndPersistPreviewFromSourceURL:(id)a0 previewURL:(id)a1 size:(out struct CGSize { double x0; double x1; } *)a2 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a3 error:(id *)a4;

@end
