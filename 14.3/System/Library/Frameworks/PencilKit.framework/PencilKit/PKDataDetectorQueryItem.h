@class NSSet, UIBezierPath, DDScannerResult, CHDataDetectorQueryItem;

@interface PKDataDetectorQueryItem : NSObject

@property (retain, nonatomic) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) UIBezierPath *baselinePath;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoreHandwritingDataDetectorQueryItem:(id)a0;

@end
