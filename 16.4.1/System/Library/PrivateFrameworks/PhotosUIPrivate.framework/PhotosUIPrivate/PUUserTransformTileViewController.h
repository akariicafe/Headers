@class PUAssetViewModel, NSString, NSTimer, PUDisplayTileTransform, PUUserTransformView, PUBrowsingViewModel;
@protocol PXVKImageAnalysisInteraction, PUUserTransformTileViewControllerDelegate;

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate> {
    struct { BOOL respondsToDidChangeModelTileTransform; BOOL respondsToDidChangeIsUserInteracting; BOOL respondsToShouldReceiveTouchAtLocationFromProvider; BOOL respondsToTextsToHighlight; BOOL respondsToViewControllerPresentingTileView; BOOL respondsToViewControllerPresentingViewController; BOOL respondsToViewControllerShouldShowVisualIntelligenceOverlay; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView;
@property (nonatomic, setter=_setUntransformedContentFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _untransformedContentFrame;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (retain, nonatomic) PUDisplayTileTransform *displayTileTransform;
@property (retain, nonatomic) id<PXVKImageAnalysisInteraction> imageInteraction;
@property (readonly, nonatomic) BOOL _allowsVKRemoveBackground;
@property (nonatomic) long long vkOverlayUpdateToken;
@property (nonatomic) BOOL imageSubjectAnalyzingFinished;
@property (readonly, nonatomic) BOOL visualImageInteractionEnabled;
@property (retain, nonatomic) NSTimer *pptVKAnalysWaitingTimer;
@property (weak, nonatomic) id<PUUserTransformTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic, setter=setUserInteractionEnabled:) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly, nonatomic) BOOL imageSubjectAnalysisAvailable;
@property (readonly, nonatomic) BOOL isVisualIntelligenceOverlayInitialized;
@property (readonly, nonatomic) BOOL imageInteractionHasAnalysisAndSubjectLiftingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)actionInfoItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_ppt_fireVKAnalysisWaitingTimer;
- (id)contentViewForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(id)a0;
- (void)_handleBrowsingViewModel:(id)a0 didChange:(id)a1;
- (BOOL)userTransformView:(id)a0 shouldReceiveTouchAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)imageAnalysisInteraction:(id)a0 livePhotoShouldPlay:(BOOL)a1;
- (void)_updateUserTransformView;
- (BOOL)wantsVisibleRectChanges;
- (void)userTransformView:(id)a0 didChangeIsUserInteracting:(BOOL)a1;
- (BOOL)isShowingLivePhotoForImageAnalysisInteraction:(id)a0;
- (void)_ppt_resetVKAnalysisWaitingTimer;
- (void)becomeReusable;
- (BOOL)imageSubjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didChangeVisibleRect;
- (BOOL)_needsVisualImageOverlay;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (void)_updateVisualImageOverlay;
- (void)ppt_notifyWhenVKAnalysisIsReadyWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (BOOL)pointInsideContentView:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)_createVKImageInteractionIfNeeded;
- (void)userTransformView:(id)a0 didChangeUserAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isUserInteracting:(BOOL)a2;
- (BOOL)interactableItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleAssetViewModel:(id)a0 didChange:(id)a1;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)beginImageSubjectAnalysisIfNecessary;
- (id)contentImageForImageAnalysisInteraction:(id)a0;
- (void)_updateUserInteractionEnabled;
- (void)applyLayoutInfo:(id)a0;
- (void)_configureVisualImageOverlay;
- (struct CGPoint { double x0; double x1; })_pointInScrollContentViewFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)imageAnalysisInteractionDidBeginSubjectAnalysis:(id)a0;
- (void)_resetVisualImageOverlay;
- (id)initWithReuseIdentifier:(id)a0;
- (void)didChangeAnimating;
- (void).cxx_destruct;
- (void)_updateUserTransformPadding;
- (id)_userInputOriginIdentifier;
- (id)loadView;

@end
