@class AKCandidatePickerView_iOS, AKController, CHRecognizer, AKPageModelController, AKAnnotation, NSMutableDictionary, CHDrawing, NSMutableArray;
@protocol AKShapeDetectionControllerDelegate;

@interface AKShapeDetectionController : NSObject

@property (retain, nonatomic) CHDrawing *lastDrawing;
@property double veryHighConfidenceLevel;
@property (retain, nonatomic) CHDrawing *candidateDrawing;
@property (retain, nonatomic) NSMutableArray *candidateAKTags;
@property (retain, nonatomic) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap;
@property (retain, nonatomic) AKCandidatePickerView_iOS *candidatePickerView;
@property (weak, nonatomic) id<AKShapeDetectionControllerDelegate> delegate;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) AKAnnotation *candidateAnnotation;
@property (retain, nonatomic) CHRecognizer *shapeRecognizer;
@property (readonly, nonatomic) BOOL isShowingCandidatePicker;
@property (nonatomic) BOOL preferDoodle;
@property (nonatomic) BOOL coalescesDoodles;
@property (nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled;
@property BOOL isPreviousCandidateAnnotationUndecided;
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections;

+ (BOOL)drawingIsValidForRecognition:(id)a0 withPath:(struct CGPath { } *)a1;
+ (void)logAllResults:(id)a0;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)reset;
- (id)initWithController:(id)a0;
- (void)_shouldDismissNotification:(id)a0;
- (void)_teardownCandidatePicker;
- (void)dismissCandidatePicker;
- (void)clearPreviousCandidateAnnotation;
- (id)_createAnnotationWithRecognizerResult:(id)a0 forDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldGoToPageController:(id *)a2;
- (void)_presentCandidatePickerBarWithCandidates:(id)a0 ofDrawing:(id)a1;
- (void)_teardownCandidatePickerBar;
- (long long)_matchingBlurEffectStyleForCurrentTintColor:(id)a0;
- (void)_pickCandidateResult:(id)a0;
- (void)_pickCandidateResultWithAnnotationType:(long long)a0;
- (void)_performRecognitionOnDrawing:(id)a0 withInkDrawing:(id)a1 orWithDoodlePath:(struct CGPath { } *)a2 boundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 center:(struct CGPoint { double x0; double x1; })a4 isPrestroked:(BOOL)a5 optionalAnnotation:(id)a6;
- (id)convertDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outBoundsInPageModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)a0 withDrawingCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)createInkResultFromInkDrawing:(id)a0 annotation:(id)a1;
- (id)_createDoodleShapeResultWithPath:(struct CGPath { } *)a0 withDrawingCenter:(struct CGPoint { double x0; double x1; })a1 pathIsPrestroked:(BOOL)a2;
- (BOOL)_isResultVeryHighConfidence:(id)a0;
- (long long)_toolTagForCHRecognitionResult:(id)a0;
- (void)_showCandidatePickerWithTypes:(id)a0 forDrawingInInputView:(id)a1 shouldSurfaceDoodle:(BOOL)a2;
- (void)performRecognitionOnDrawing:(id)a0 withDrawing:(id)a1 annotation:(id)a2 boundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 center:(struct CGPoint { double x0; double x1; })a4;
- (void)performRecognitionOnDrawing:(id)a0 withPath:(struct CGPath { } *)a1 boundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 center:(struct CGPoint { double x0; double x1; })a3 isPrestroked:(BOOL)a4;

@end
