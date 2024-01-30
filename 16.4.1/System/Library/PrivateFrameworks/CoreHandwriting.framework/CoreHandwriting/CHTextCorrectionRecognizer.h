@class CHRecognizer, CHCornerDetector, NSArray;
@protocol CHRecognizing;

@interface CHTextCorrectionRecognizer : NSObject

@property (readonly, nonatomic) id<CHRecognizing> _textRecognizer;
@property (readonly, nonatomic) CHRecognizer *_shapeRecognizer;
@property (readonly, nonatomic) CHCornerDetector *_cornerDetector;
@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isRemoteRecognition;

+ (id)_improvedSingleCharacterOneColumnTextResult:(id)a0 targetContentInfo:(id)a1 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4;
+ (id)_modifiedTextResult:(id)a0 replacingString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_relativeRangeOfPreviousCharacterFromTargetContentInfo:(id)a0 absoluteInsertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })defaultTextAffectedRangeForTargetContentInfo:(id)a0;

- (void).cxx_destruct;
- (id)_editingGestureResultForDrawing:(id)a0 originalDrawing:(id)a1 lastStroke:(id)a2 targetContentInfo:(id)a3 previousResult:(id)a4;
- (id)_gestureOnBlankAreaResultForDrawing:(id)a0 originalDrawing:(id)a1 targetContentInfo:(id)a2;
- (BOOL)_isInNoSpaceRegionNextToTextFromTargetContentInfo:(id)a0 drawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 localTypedContextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 outIsWhiteSpace:(BOOL *)a4 outDistance:(double *)a5 outSpaceDistanceThreshold:(double *)a6;
- (unsigned long long)_precedingLineBreakCountForAutoLineBreak:(id)a0 targetContentInfo:(id)a1;
- (long long)_precedingSpaceBehaviorFromTargetContentInfo:(id)a0 drawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 localTypedContextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 lastCharacterBefore:(id)a4;
- (id)_refinedGestureResultForPreviousResult:(id)a0 originalDrawing:(id)a1 lastStroke:(id)a2 targetContentInfo:(id)a3;
- (id)_textAfterStringForTargetContentInfo:(id)a0 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_textBeforeStringForTargetContentInfo:(id)a0 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_textInsertionResultForDrawing:(id)a0 targetContentInfo:(id)a1 originalDrawing:(id)a2 localTypedContextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 normalizedDrawingScaleFactor:(double)a4 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (id)_verticalBarGestureCloseToTextForDrawing:(id)a0 originalDrawing:(id)a1 targetContentInfo:(id)a2 localTypedContextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)_verticalBarGestureOnBlankAreaResultForDrawing:(id)a0 originalDrawing:(id)a1 targetContentInfo:(id)a2;
- (id)initWithLocales:(id)a0 remoteRecognition:(BOOL)a1 priority:(long long)a2;
- (id)textCorrectionResultForDrawing:(id)a0 targetContentInfo:(id)a1 originalDrawing:(id)a2 lastStroke:(id)a3 localTypedContextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 normalizedDrawingScaleFactor:(double)a5 previousCorrectionResult:(id)a6;

@end
