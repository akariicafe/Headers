@class DDScannerResult;

@interface PKDataDetectorItem : PKDetectionItem

@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) struct __DDResult { } *coreResult;

+ (id)dataDetectorItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (id)strokeColor;
- (id)drawing;
- (BOOL)isEqual:(id)a0;
- (id)_baselinePath;

@end
