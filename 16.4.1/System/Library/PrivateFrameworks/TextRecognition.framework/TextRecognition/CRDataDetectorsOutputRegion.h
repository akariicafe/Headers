@class DDScannerResult;

@interface CRDataDetectorsOutputRegion : CROutputRegion

@property unsigned long long dataType;
@property (retain) DDScannerResult *ddResult;

+ (unsigned long long)dataTypeForDDResult:(id)a0;
+ (id)outputRegionWithDDResult:(id)a0 children:(id)a1;

- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (BOOL)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;

@end
