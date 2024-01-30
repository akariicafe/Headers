@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject

@property (weak) AKController *controller;
@property (retain) AKHighlightAnnotation *continuousHighlight;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)continueHighlighting;
- (void)beginContinuousHighlighting;
- (void)endContinuousHighlighting;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)a0;
- (BOOL)_adaptExistingHighlightsToNewHighlight:(id)a0 onPageController:(id)a1 firstModifiedHighlight:(id *)a2;
- (BOOL)_clearHighlightsWithStyleMatchingMask:(unsigned long long)a0 except:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 onPageController:(id)a3;
- (id)_highlightsInCharacterIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 onPageController:(id)a1;
- (void)performOneShotHighlightWithAttributeTag:(long long)a0;
- (void)clearHighlightsWithinSelection;
- (id)highlightsWithinSelection;

@end
