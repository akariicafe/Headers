@class NSString, VKCImageAnalysis, VKImageAnalysisInteraction;
@protocol AVVisualAnalysisViewDelegate;

@interface AVVisualAnalysisView : UIView <VKCImageAnalysisInteractionDelegate> {
    BOOL _subjectLiftGestureEnabled;
}

@property (retain, nonatomic) VKImageAnalysisInteraction *imageAnalysisInteraction;
@property (nonatomic, getter=isInteractionInProgress) BOOL interactionInProgress;
@property (nonatomic) BOOL hasVisualLookupResults;
@property (weak, nonatomic) id<AVVisualAnalysisViewDelegate> delegate;
@property (copy, nonatomic) VKCImageAnalysis *analysis;
@property (nonatomic) BOOL wantsAnalysisButtonVisible;
@property (nonatomic) BOOL highlightsInteractableAreas;
@property (readonly, nonatomic) BOOL hasProminentText;
@property (nonatomic) double analysisButtonBottomInset;
@property (readonly, nonatomic) BOOL hasSubjectToCopy;
@property (nonatomic) unsigned long long analysisTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetSelection;
- (BOOL)hasActiveTextSelection;
- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)imageAnalysisInteraction:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)analysisButton;
- (void)imageAnalysisInteraction:(id)a0 liveTextButtonDidChangeToVisible:(BOOL)a1;
- (void).cxx_destruct;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(id)a0;
- (void)imageAnalysisInteraction:(id)a0 didRequestLiveTextButtonSelectedState:(BOOL)a1;
- (void)hasActiveTextSelectionDidChangeForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteraction:(id)a0 highlightSelectedItemsValueDidChange:(BOOL)a1;
- (void)imageAnalysisInteraction:(id)a0 imageAnalysisButtonPressed:(id)a1;
- (void)imageAnalysisInteraction:(id)a0 prepareForCalloutAction:(SEL)a1 competion:(id /* block */)a2;
- (void)imageAnalysisInteractionSubjectInteractionInProgressDidChange:(id)a0;
- (void)_addInteractionIfNeeded;
- (void)_removeInteractionIfNeeded;
- (void)copySubject;
- (BOOL)highlightsSelectableItems;

@end
