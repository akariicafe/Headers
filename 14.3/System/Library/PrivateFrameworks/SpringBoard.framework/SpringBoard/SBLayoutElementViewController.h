@class FBSDisplayIdentity, SBLayoutState, NSString, FBDisplayLayoutElement, UIView, SBLayoutElement, SBOrientationTransformWrapperView;

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding> {
    SBOrientationTransformWrapperView *_contentWrapperView;
    FBDisplayLayoutElement *_displayLayoutElement;
    BOOL _isViewVisible;
    BOOL _isTransitioningVisibility;
}

@property (readonly, nonatomic) UIView *_contentContainerView;
@property (readonly, nonatomic) BOOL _shouldDisplayLayoutElementBecomeActive;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) SBLayoutElement *layoutElement;
@property (readonly, nonatomic) SBLayoutState *layoutState;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (readonly, nonatomic) unsigned long long supportedContentInterfaceOrientations;
@property (nonatomic) long long contentWrapperInterfaceOrientation;
@property (readonly, nonatomic) BOOL supportsReuse;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateDisplayLayoutElementVisibility;
- (void)_updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (id)initWithDisplayIdentity:(id)a0;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)animationControllerForTransitionRequest:(id)a0;
- (id)initialRimShadowFilters;
- (void).cxx_destruct;
- (id)initialCornerRadiusConfiguration;
- (struct SBDragPreviewShadowParameters { double x0; double x1; struct CGSize { double x0; double x1; } x2; })initialDiffuseShadowParameters;
- (void)didEndTransitionToVisible:(BOOL)a0;
- (id)sourceView;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (id)containerViewForBlurContentView;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (struct SBDragPreviewShadowParameters { double x0; double x1; struct CGSize { double x0; double x1; } x2; })initialRimShadowParameters;
- (void)willBeginTransitionToVisible:(BOOL)a0;
- (void)dealloc;
- (id)initialDiffuseShadowFilters;
- (void)prepareForReuse;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)invalidate;

@end
