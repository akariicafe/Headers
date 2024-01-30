@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (BOOL)writesToDisk;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 outSize:(struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
+ (id)UTITypes;
+ (id)_avAssetForURL:(id)a0;
+ (BOOL)isAutoloopAsset:(id)a0;
+ (id)fetchUTITypes;

@end
