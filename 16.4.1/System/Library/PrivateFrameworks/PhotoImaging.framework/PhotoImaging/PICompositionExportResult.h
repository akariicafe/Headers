@class NUImageGeometry, NSString;

@interface PICompositionExportResult : NSObject

@property (retain) NUImageGeometry *geometry;
@property struct { long long width; long long height; } inputSize;
@property (copy) NSString *digest;

- (void).cxx_destruct;

@end
