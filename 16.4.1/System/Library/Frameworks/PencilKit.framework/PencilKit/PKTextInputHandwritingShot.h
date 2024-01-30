@class NSNumber, NSString, PKTextInputElementsController, NSArray, PKTextInputCanvasController, NSMutableDictionary, NSDictionary, PKDrawing, PKStroke, PKTextInputLanguageSpec, NSMutableIndexSet, PKTextInputStrokeProvider;
@protocol PKTextInputHandwritingShotDelegate;

@interface PKTextInputHandwritingShot : NSObject <PKTextInputRecognitionManagerDataSource, PKTextInputDebugStateReporting>

@property (nonatomic, setter=_setShotState:) long long shotState;
@property (copy, nonatomic, setter=_setInputElementsByRecognitionID:) NSDictionary *_inputElementsByRecognitionID;
@property (readonly, nonatomic) NSMutableDictionary *_inputElementsContentByRecognitionID;
@property (retain, nonatomic) NSMutableIndexSet *_potentiallyTargetedElementRecognitionIDs;
@property (copy, nonatomic, setter=_setResultQueryItems:) NSArray *resultQueryItems;
@property (retain, nonatomic) PKTextInputStrokeProvider *strokeProvider;
@property (copy, nonatomic) NSArray *_submittedTextInputTargets;
@property (copy, nonatomic) NSDictionary *_submittedTargetContentInfoByTargetID;
@property (nonatomic) double _lastDrawingUpdateTimestamp;
@property (nonatomic) double recognitionDuration;
@property (nonatomic, setter=_setDidRequestTextInputElements:) BOOL _didRequestTextInputElements;
@property (readonly, nonatomic) PKTextInputCanvasController *canvasController;
@property (readonly, nonatomic) PKTextInputElementsController *elementsController;
@property (weak, nonatomic) id<PKTextInputHandwritingShotDelegate> delegate;
@property (readonly, copy, nonatomic) PKDrawing *inputDrawing;
@property (readonly, copy, nonatomic) PKStroke *inputInProgressStroke;
@property (nonatomic) BOOL writingIsActiveAtStart;
@property (nonatomic) BOOL cursorIsWeakAtStart;
@property (nonatomic) BOOL cursorIsForcedStrongAtStart;
@property (copy, nonatomic) NSNumber *writingSessionIdentifier;
@property (readonly, nonatomic) PKTextInputLanguageSpec *languageSpec;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) NSArray *textInputTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_contentTypeFromKeyboardType:(long long)a0;
+ (int)_contentTypeFromTextContentType:(id)a0;

- (void).cxx_destruct;
- (void)recognitionManager:(id)a0 recognitionDidFinishWithQueryItems:(id)a1 duration:(double)a2;
- (int)_autoCapitalizationModeForTextInputTraits:(id)a0;
- (int)_autoCorrectionModeForTextInputTraits:(id)a0;
- (id)_closestInputElementForStrokeIdentifiers:(id)a0;
- (id)_contentInfoFromElementContent:(id)a0 textInputTarget:(id)a1 strokeIdentifiers:(id)a2;
- (int)_contentTypeForElementContent:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_correctableTextRangeIntersectingStrokesWithIdentifiers:(id)a0 inInputTarget:(id)a1 elementContent:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_editingGestureCorrectableRangeForStrokeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 InInputTarget:(id)a1 elementContent:(id)a2;
- (void)_evaluateSubmissionReadyness;
- (void)_fetchTextInputElementsIfNeededWithReferenceHitPoint:(struct CGPoint { double x0; double x1; })a0 referenceSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 referenceCoordSpace:(id)a2;
- (void)_loadAndSaveContentFocusingIfNeededForElement:(id)a0 referenceCanvasPoint:(struct CGPoint { double x0; double x1; })a1 strokesBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
- (id)_protectedCharacterIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forElementContent:(id)a1;
- (void)_saveSubmittedTargetContentInfo:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedTextRangeForElementContent:(id)a0 textInputTarget:(id)a1 strokeSliceIdentifiers:(id)a2;
- (void)_setupStrokeProvider;
- (BOOL)_shouldTargetFirstResponderElement:(id)a0 strokeIdentifiers:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_substringReferenceRangeForStrokeCoveredRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contentLength:(long long)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_textContentSubstringInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forElementContent:(id)a1;
- (void)beginRecognitionWithRecognitionManager:(id)a0;
- (id)initWithCanvasController:(id)a0 elementsController:(id)a1 languageSpec:(id)a2;
- (BOOL)isPotentiallyTargetingElement:(id)a0;
- (void)recognitionManager:(id)a0 fetchContentInfoForTextInputTarget:(id)a1 strokeIdentifiers:(id)a2 completion:(id /* block */)a3;
- (id)recognitionManager:(id)a0 textInputTargetForItemStableIdentifier:(id)a1 strokeIdentifiers:(id)a2 simultaneousItemStableIdentifiers:(id)a3;
- (id)recognitionManagerStrokeProvider:(id)a0;
- (id)recognitionManagerTextInputTargets:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)setInputDrawing:(id)a0 inputInProgressStroke:(id)a1;
- (id)submittedTargetContentInfoForRecognitionIdentifier:(id)a0;
- (id)textInputElementContentForRecognitionIdentifier:(id)a0;
- (id)textInputElementForRecognitionIdentifier:(id)a0;

@end
