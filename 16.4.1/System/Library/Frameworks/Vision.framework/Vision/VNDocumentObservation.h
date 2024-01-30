@class NSArray, VNRecognizedTextBlockObservation, NSString, CRDocumentOutputRegion;

@interface VNDocumentObservation : VNDetectedObjectObservation <VNDataDetectorSupporting> {
    CRDocumentOutputRegion *_topLevelRegion;
    NSArray *_blocks;
}

@property (readonly, nonatomic, getter=getBlocks) NSArray *blocks;
@property (readonly, nonatomic, getter=getTitle) VNRecognizedTextBlockObservation *title;
@property (readonly, nonatomic, getter=getTranscript) NSString *transcript;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)blocksWithTypes:(unsigned long long)a0 inRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_textBlockObservationsFromRegion:(id)a0 requestRevision:(unsigned long long)a1;
- (id)boundingBoxForTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)closestTextBlockOfTypes:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 maximumPixelDistance:(long long)a2;
- (id)getCRDocumentOutputRegion;
- (id)getDataDetectorResults:(id *)a0;
- (id)initWithTopLevelRegion:(id)a0 requestRevision:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTextBlock:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTextBlockObservation:(id)a0;
- (BOOL)shouldReprocessDocument;
- (id)textBlockOfTypes:(unsigned long long)a0 containingTextAtIndex:(long long)a1;
- (id)textBlockWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)vn_cloneObject;

@end
