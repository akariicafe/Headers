@class NUImageExportRequest;

@interface PICompositionExportImagePrepareResult : NSObject

@property (retain) NUImageExportRequest *request;
@property struct { long long width; long long height; } inputSize;

- (void).cxx_destruct;

@end
