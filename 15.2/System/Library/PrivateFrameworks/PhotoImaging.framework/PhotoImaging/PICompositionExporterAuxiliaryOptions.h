@class NSString, NUImageExportFormat, NSURL, NUAdjustment;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions

@property (retain) NSURL *primaryURL;
@property (retain) NSURL *videoComplementURL;
@property (retain) NSURL *videoPosterFrameURL;
@property (copy, nonatomic) NSString *videoCodecType;
@property (copy) NUImageExportFormat *imageExportFormat;
@property BOOL renderCompanionResources;
@property (retain) NUAdjustment *reframeCropAdjustment;
@property (retain) NUAdjustment *reframeVideoAdjustment;
@property BOOL applyImageOrientationAsMetadata;
@property BOOL applyVideoOrientationAsMetadata;

- (void).cxx_destruct;

@end
