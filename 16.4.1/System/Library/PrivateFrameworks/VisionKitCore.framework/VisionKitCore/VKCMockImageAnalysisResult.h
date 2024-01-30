@class NSString, NSDictionary, VKCMockTextProvider, NSArray;

@interface VKCMockImageAnalysisResult : VKCImageAnalysisResult {
    NSArray *_dataDetectors;
    NSArray *_allLineQuads;
}

@property (retain, nonatomic) NSDictionary *sourceDict;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) VKCMockTextProvider *textProvider;
@property (nonatomic) BOOL isRunningTest;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

+ (id)mockImageAnalysisResultFromDictionary:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)addMockDataDetectorElementsFromArray:(id)a0;
- (id)adjustTextRangeToSelectableRange:(id)a0;
- (id)allLineQuads;
- (id)dataDetectors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)generateText;
- (id)rangeOfLineForPosition:(id)a0;
- (id)rangeOfWordForPosition:(id)a0;
- (id)selectionRectsForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)smallestSelectableRangeForPosition:(id)a0;
- (id)stringForLine:(id)a0;

@end
