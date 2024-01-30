@class NSArray, NSString, CROutputRegion;

@interface VNRecognizedTextBlockObservation : VNRecognizedTextObservation <VNDataDetectorSupporting> {
    CROutputRegion *_crOutputRegion;
}

@property (readonly, nonatomic, getter=getChildren) NSArray *children;
@property (readonly, nonatomic, getter=getTranscript) NSString *transcript;
@property (readonly, nonatomic, getter=getLines) NSArray *lines;

- (id)getDataDetectorResults:(id *)a0;
- (void).cxx_destruct;
- (id)topCandidates:(unsigned long long)a0;
- (id)debugDescription;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 crOutputRegion:(id)a1;
- (id)getCROutputRegion;

@end
