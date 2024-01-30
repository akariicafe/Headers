@class NSArray, DDScannerResult, VKQuad;

@interface VKCMRCMADWrappedDataDetectorElement : VKCMRCDataDetectorElement <NSSecureCoding> {
    NSArray *_boundingQuads;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) DDScannerResult *scannerResult;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (retain, nonatomic) VKQuad *quad;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)boundingQuads;
- (id)initWithMADMRCResultItem:(id)a0 scannerResult:(id)a1;
- (id)initWithScannerResult:(id)a0 quad:(id)a1;

@end
