@interface PAMediaConversionServiceImagingUtilities : NSObject

+ (BOOL)generatePosterFrameExportForVideoURL:(id)a0 outputData:(id *)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 outputFileType:(id)a3 error:(id *)a4;
+ (BOOL)_generatePosterFrameExportForVideoURL:(id)a0 imageDestinationToAddToAndFinalize:(struct CGImageDestination { } *)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (BOOL)generatePosterFrameExportForVideoURL:(id)a0 destinationURL:(id)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 outputFileType:(id)a3 error:(id *)a4;
+ (id)imageDataForPassthroughConversionForSourceURL:(id)a0 metadataPolicy:(id)a1 outResultImageSize:(struct CGSize { double x0; double x1; } *)a2;
+ (id)imagePropertiesForFileAtURL:(id)a0;

@end
