@class UIView, NSString, PGPrerollIndicatorView, PGButtonView, PGControlsViewModel, NSArray, PGProgressIndicator, PGCABackdropLayerView, PGDisplayLink, UIActivityIndicatorView, PGLayoutContainerView;

@interface PGControlsView : PGLayoutContainerView <PGButtonViewDelegate> {
    PGControlsViewModel *_viewModel;
    PGButtonView *_restoreButton;
    PGButtonView *_cancelButton;
    PGButtonView *_skipBackButton;
    PGButtonView *_actionButton;
    PGButtonView *_skipForwardButton;
    PGButtonView *_liveIndicatorBadgeButton;
    UIActivityIndicatorView *_contentLoadingIndicator;
    UIView *_contentLoadingIndicatorContainerView;
    PGLayoutContainerView *_hidableItemsLayoutContainerView;
    PGCABackdropLayerView *_captureOnlyView;
    PGProgressIndicator *_progressIndicator;
    PGPrerollIndicatorView *_prerollIndicatorView;
    UIView *_gradientView;
    NSArray *_allButtons;
    NSString *_groupNameBase;
    PGDisplayLink *_displayLinkForProgressUpdates;
}

@property (nonatomic) BOOL prefersControlsHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateProgress;
- (id)initWithCoder:(id)a0;
- (BOOL)PG_preferredVisibilityForView:(id)a0;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)buttonViewDidReceiveTouchUpInside:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonView:(id)a0 imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonView:(id)a0 titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonView:(id)a0 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)viewModelDidUpdateValuesFromOldValues:(id)a0;
- (void)updateControlsAlpha;
- (id)PG_backdropGroupLeader;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressIndicatorFrameWithScaling:(double)a0;
- (BOOL)_showsGradientView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_prerollIndicatorFrameWithScaling:(double)a0;
- (void)updateControlsHidden;

@end
