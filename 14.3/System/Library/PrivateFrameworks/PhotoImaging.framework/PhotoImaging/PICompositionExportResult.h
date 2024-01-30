@class NUImageGeometry;

@interface PICompositionExportResult : NSObject

@property (retain) NUImageGeometry *geometry;
@property struct { long long width; long long height; } inputSize;

- (void).cxx_destruct;

@end
