@class NSString, VKCImageAnalysis, VKImageAnalysisInteraction;
@protocol AVVisualAnalysisViewDelegate;

@interface AVVisualAnalysisView : UIView <VKCImageAnalysisInteractionDelegate>

@property (retain, nonatomic) VKImageAnalysisInteraction *imageAnalysisInteraction;
@property (nonatomic, getter=isInteractionInProgress) BOOL interactionInProgress;
@property (weak, nonatomic) id<AVVisualAnalysisViewDelegate> delegate;
@property (copy, nonatomic) VKCImageAnalysis *analysis;
@property (nonatomic) BOOL showsAnalysisButtonIfAvailable;
@property (nonatomic) BOOL analysisButtonVisibleOnlyWhenSelected;
@property (nonatomic) BOOL highlightsInteractableAreas;
@property (readonly, nonatomic) BOOL hasProminentText;
@property (nonatomic) double analysisButtonBottomInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageAnalysisInteraction:(id)a0 didRequestLiveTextButtonSelectedState:(BOOL)a1;
- (BOOL)hasActiveTextSelection;
- (void)resetSelection;
- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (id)analysisButton;
- (void).cxx_destruct;
- (void)_addInteractionIfNeeded;
- (void)_removeInteractionIfNeeded;
- (void)_updateActionInfoViewHiddenStateIfNeeded;
- (void)hasActiveTextSelectionDidChangeForImageAnalysisInteraction:(id)a0;
- (BOOL)highlightsSelectableItems;
- (void)imageAnalysisInteraction:(id)a0 highlightSelectedItemsValueDidChange:(BOOL)a1;
- (void)imageAnalysisInteraction:(id)a0 imageAnalysisButtonPressed:(id)a1;
- (void)imageAnalysisInteraction:(id)a0 liveTextButtonDidChangeToVisible:(BOOL)a1;
- (void)imageAnalysisInteraction:(id)a0 prepareForCalloutAction:(SEL)a1 competion:(id /* block */)a2;

@end
