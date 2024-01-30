@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)writesToDisk;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1 error:(id *)a2;
+ (id)UTITypes;
+ (id)passDataForURL:(id)a0 error:(id *)a1;
+ (BOOL)passDataHasFailed:(id)a0 error:(id)a1;
+ (id)passForPassData:(id)a0 error:(id *)a1;
+ (BOOL)passHasFailed:(id)a0 error:(id)a1;
+ (id)passViewForPass:(id)a0;
+ (BOOL)passViewHasFailed:(id)a0;
+ (struct CGImage { } *)newCroppedAndRescaledImageFromPKPassView:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; })a1;
+ (BOOL)hasFailed:(id)a0 error:(id)a1;

@end
