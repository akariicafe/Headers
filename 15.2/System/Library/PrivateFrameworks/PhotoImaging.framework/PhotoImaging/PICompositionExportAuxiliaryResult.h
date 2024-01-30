@class NSDictionary, NSData, NSURL;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult

@property (retain) NSDictionary *auxiliaryImages;
@property BOOL canPropagateOriginalAuxiliaryData;
@property (copy) NSDictionary *properties;
@property struct { long long x0; long long x1; } inputSize;
@property (retain) NSData *companionImageData;
@property (retain) NSURL *companionVideoURL;

- (void).cxx_destruct;

@end
