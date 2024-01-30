@class NSDate, NSString, NSArray, VKTextRange, VNRecognizedTextBlockObservation, CROutputRegion, VNDocumentObservation, CRDocumentOutputRegion;
@protocol VKCTextRecognitionResultTextDelegate;

@interface VKCTextRecognitionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *textElements;
@property (retain, nonatomic) NSArray *inspectableElements;
@property (retain, nonatomic) NSArray *dataDetectors;
@property (retain, nonatomic) NSArray *unfilteredDataDetectors;
@property (retain, nonatomic) CRDocumentOutputRegion *sourceDocument;
@property (retain, nonatomic) VNDocumentObservation *sourceVNDocument;
@property (retain, nonatomic) VNRecognizedTextBlockObservation *titleObservation;
@property (retain, nonatomic) NSString *buildString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) CROutputRegion *crTitleOutput;
@property (readonly, nonatomic) VKTextRange *vk_documentRange;
@property (weak, nonatomic) id<VKCTextRecognitionResultTextDelegate> textDelegate;
@property (nonatomic) unsigned long long imageSource;
@property (readonly, nonatomic) NSArray *allLineQuads;
@property (retain, nonatomic) NSArray *requestLocales;
@property (retain, nonatomic) NSArray *requestBarcodeSymbologies;

- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)documentElements;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)a0;
- (id)initWithDocumentObservation:(id)a0 mrcDataDetectors:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (void)updateInspectableElements;
- (id)smallestSelectableRangeForPosition:(id)a0;
- (id)normalizedSelectionQuadsForRange:(id)a0;
- (id)closestBlockOfType:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)selectionRectsForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)adjustTextRangeToSelectableRange:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1 maxDistance:(long long)a2;
- (id)selectionRectsForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 addTranscript:(BOOL)a3;
- (id)elementMatchingOutputRegion:(id)a0;
- (id)rangeOfWordForPosition:(id)a0;
- (id)rangeOfLineForPosition:(id)a0;

@end
