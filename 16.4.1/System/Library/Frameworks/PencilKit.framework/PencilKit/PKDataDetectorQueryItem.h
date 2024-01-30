@class CHDataDetectorQueryItem, DDScannerResult;

@interface PKDataDetectorQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem;
@property (readonly, nonatomic) DDScannerResult *scannerResult;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)baselinePath;
- (id)initWithCoreHandwritingDataDetectorQueryItem:(id)a0;
- (id)strokeIdentifiers;

@end
