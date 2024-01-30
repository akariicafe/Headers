@class VKImageAnalysisInteraction, NSString, QLToolbarButton, VKImageAnalyzer, UIView, NSLayoutConstraint, UIButton;
@protocol QLImageAnalysisManagerDelegate;

@interface QLImageAnalysisManager : NSObject <VKImageAnalysisInteractionDelegate> {
    BOOL _shouldHighlightTextForNextAnalysis;
    BOOL _isFullScreen;
    BOOL _isImageAnalysisPopoverPresented;
    QLToolbarButton *_imageAnalysisToolbarButton;
    UIView *_analysisButtonContainer;
    NSLayoutConstraint *_analysisButtonContainerRightConstraint;
    NSLayoutConstraint *_analysisButtonContainerBottomConstraint;
}

@property (retain, nonatomic) VKImageAnalysisInteraction *imageInteraction;
@property (retain, nonatomic) VKImageAnalyzer *imageAnalyzer;
@property (nonatomic) int imageAnalysisRequestId;
@property (weak, nonatomic) id<QLImageAnalysisManagerDelegate> delegate;
@property (readonly, nonatomic) UIButton *analysisButton;
@property (readonly, nonatomic) UIView *visualSearchCornerView;
@property (readonly, nonatomic) QLToolbarButton *imageAnalysisToolbarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldStartImageAnalysisForPresentationMode:(unsigned long long)a0;

- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)cancelAllRequests;
- (void)imageAnalysisInteraction:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)a0;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasActiveTextSelection;
- (void).cxx_destruct;
- (id)image;
- (void)scrollViewDidZoomToUnitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateForFullScreen:(BOOL)a0;
- (BOOL)isInteractionActive;
- (BOOL)hasResultsForVisualSearch;
- (void)infoButtonTapped;
- (void)stopImageAnalysis;
- (void)setupImageAnalysis;
- (void)startImageAnalysis;
- (void)setupAnalysisButtonsContainerInView:(id)a0;
- (void)updateBottomRightContainerPositionForImageView:(id)a0 view:(id)a1;
- (void)shouldHideInteraction:(BOOL)a0 animated:(BOOL)a1;
- (void)setFirstTimeDataDetectorsAndTextSelectionInteractions;
- (void)activateVisualSearchInteraction;
- (BOOL)isTextSelectionEnabled;
- (id)imageAnalysisQueue;
- (void)_updateAnalysisButtonWithAnimation:(BOOL)a0;
- (BOOL)isVisualSearchEnabled;
- (void)_updateAnalysisButton;
- (void)_updateInfoButtonWithAnimation:(BOOL)a0;
- (void)_startImageAnalysisWithRequest:(id)a0;
- (void)_handleImageAnalysis:(id)a0 error:(id)a1;
- (void)_activateInteractionTypes:(unsigned long long)a0;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)imageAnalysisPopoverWillAppear;
- (void)imageAnalysisPopoverDidDisappear;
- (void)imageAnalysisInteraction:(id)a0 prepareForCalloutAction:(SEL)a1 competion:(id /* block */)a2;
- (void)enableMarkupMode:(BOOL)a0;

@end
