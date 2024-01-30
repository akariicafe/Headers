@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions

@property (copy) NUImageExportFormat *imageExportFormat;
@property double JPEGCompressionQuality;
@property (copy) id /* block */ metadataProcessor;
@property BOOL optimizeForSharing;
@property BOOL applyImageOrientationAsMetadata;
@property BOOL optimizeForBackgroundProcessing;

- (id)init;
- (void).cxx_destruct;
- (id)imageExportFormatForURL:(id)a0;

@end
