@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions

@property (copy) NUImageExportFormat *imageExportFormat;
@property double JPEGCompressionQuality;
@property (copy) id /* block */ metadataProcessor;
@property BOOL optimizeForSharing;
@property BOOL applyImageOrientationAsMetadata;

- (void).cxx_destruct;
- (id)init;
- (id)imageExportFormatForURL:(id)a0;

@end
