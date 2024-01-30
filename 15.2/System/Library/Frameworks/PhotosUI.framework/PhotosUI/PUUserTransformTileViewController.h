@class PUAssetViewModel, NSString, PUDisplayTileTransform, PUUserTransformView, PUBrowsingViewModel;
@protocol PXVKImageAnalysisInteraction, PUUserTransformTileViewControllerDelegate, PXVKImageAnalysis;

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate> {
    struct { BOOL respondsToDidChangeModelTileTransform; BOOL respondsToDidChangeIsUserInteracting; BOOL respondsToShouldReceiveTouchAtLocationFromProvider; BOOL respondsToSpotlightTextsToHighlight; BOOL respondsToViewControllerPresentingImageTileView; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView;
@property (nonatomic, setter=_setUntransformedContentFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _untransformedContentFrame;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (retain, nonatomic) PUDisplayTileTransform *displayTileTransform;
@property (retain, nonatomic) id<PXVKImageAnalysisInteraction> imageInteraction;
@property (retain, nonatomic) id<PXVKImageAnalysis> imageAnalysis;
@property (weak, nonatomic) id<PUUserTransformTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic, setter=setUserInteractionEnabled:) BOOL userInteractionEnabled;
@property (nonatomic) BOOL visualImageInteractionEnabled;
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_handleAssetViewModel:(id)a0 didChange:(id)a1;
- (void)_handleBrowsingViewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)becomeReusable;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_resetVisualImageOverlay;
- (void)userTransformView:(id)a0 didChangeIsUserInteracting:(BOOL)a1;
- (void)didChangeAnimating;
- (id)loadView;
- (void)_configureVisualImageOverlay;
- (void)_updateUserTransformView;
- (void)userTransformView:(id)a0 didChangeUserAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isUserInteracting:(BOOL)a2;
- (void).cxx_destruct;
- (id)_userInputOriginIdentifier;
- (BOOL)userTransformView:(id)a0 shouldReceiveTouchAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_needsVisualImageOverlay;
- (void)_updateUserInteractionEnabled;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateUserTransformPadding;
- (void)dealloc;
- (void)_updateVisualImageOverlay;
- (id)contentViewForImageAnalysisInteraction:(id)a0;

@end
