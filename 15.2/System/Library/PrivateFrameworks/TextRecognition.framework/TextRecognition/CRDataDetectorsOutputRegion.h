@class DDScannerResult;

@interface CRDataDetectorsOutputRegion : CROutputRegion

@property unsigned long long dataType;
@property (retain) DDScannerResult *ddResult;

+ (unsigned long long)dataTypeForDDResult:(id)a0;
+ (id)outputRegionWithDDResult:(id)a0 children:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (id)crCodableDataRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (unsigned long long)type;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;

@end
