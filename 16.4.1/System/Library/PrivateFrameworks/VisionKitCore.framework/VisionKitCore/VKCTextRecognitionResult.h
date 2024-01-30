@class NSDate, NSString, NSArray, NSAttributedString, NSIndexSet, VNRecognizedTextBlockObservation, NSDictionary, VKTextRange, CROutputRegion, VNDocumentObservation, CRDocumentOutputRegion;
@protocol VKCTextRecognitionResultTextDelegate;

@interface VKCTextRecognitionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *textElements;
@property (copy, nonatomic) NSArray *inspectableElements;
@property (copy, nonatomic) NSArray *mrcDataDetectors;
@property (copy, nonatomic) NSArray *filteredTextDataDetectors;
@property (copy, nonatomic) NSArray *unfilteredTextDataDetectors;
@property (retain, nonatomic) NSArray *rectangleObservations;
@property (retain, nonatomic) NSArray *filteredNormalizedRectangleQuads;
@property (retain, nonatomic) NSArray *dataDetectors;
@property (retain, nonatomic) CRDocumentOutputRegion *sourceDocument;
@property (retain, nonatomic) VNDocumentObservation *sourceVNDocument;
@property (retain, nonatomic) VNRecognizedTextBlockObservation *titleObservation;
@property (retain, nonatomic) NSString *buildString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSIndexSet *richPasteBoardIndexes;
@property (retain, nonatomic) NSDictionary *attributedTextRangeMapping;
@property (retain, nonatomic) CROutputRegion *crTitleOutput;
@property (readonly, nonatomic) VKTextRange *vk_documentRange;
@property (retain, nonatomic) NSArray *normalizedTextLineBoundingBoxes;
@property (weak, nonatomic) id<VKCTextRecognitionResultTextDelegate> textDelegate;
@property (nonatomic) unsigned long long imageSource;
@property (readonly, nonatomic) NSArray *unfilteredDataDetectors;
@property (readonly, nonatomic) NSArray *allLineQuads;
@property (retain, nonatomic) NSArray *requestLocales;
@property (retain, nonatomic) NSArray *requestBarcodeSymbologies;

- (void)encodeWithCoder:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateAttributedText;
- (void).cxx_destruct;
- (id)documentElements;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)a0;
- (id)adjustTextRangeToSelectableRange:(id)a0;
- (id)closestBlockOfType:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1 maxDistance:(long long)a2;
- (BOOL)containsRichPasteboardElementsForRange:(id)a0;
- (id)convertPlainTextRangeToAttributedRange:(id)a0;
- (id)elementMatchingOutputRegion:(id)a0;
- (id)filterTextRectanglesFromRectangleObservations:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithDocumentObservation:(id)a0 mrcDataDetectors:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)markerFormatForListItem:(id)a0;
- (id)normalizedSelectionQuadsForRange:(id)a0;
- (id)rangeOfLineForPosition:(id)a0;
- (id)rangeOfWordForPosition:(id)a0;
- (id)selectionRectsForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)selectionRectsForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 addTranscript:(BOOL)a3;
- (BOOL)shouldShowTextMarkerForMarkerType:(long long)a0;
- (id)smallestSelectableRangeForPosition:(id)a0;
- (void)updateInspectableElements;
- (void)updateMRCDataDetectors:(id)a0;
- (void)updateTextDataDetectors;
- (void)updateVNDocumentObservation:(id)a0;
- (id)zeroWidthStringOfLength:(unsigned long long)a0;

@end
