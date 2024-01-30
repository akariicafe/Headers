@class NSArray, SXDragManager, NSString;
@protocol SXMediaSharingPolicyProvider;

@interface SXContainerComponentView : SXComponentView <SXDragManagerDataSource, SXComponentHosting>

@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (retain, nonatomic) NSArray *componentViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (id)dragManager:(id)a0 dragableAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)addComponentView:(id)a0;
- (BOOL)allowHierarchyRemoval;
- (void)animationDidFinish:(id)a0;
- (id)componentViewsForRole:(int)a0 recursive:(BOOL)a1;
- (id)contentViewForBehavior:(id)a0;
- (void)didApplyBehavior:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 mediaSharingPolicyProvider:(id)a4;
- (BOOL)isTransitionable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalFrameForContentView:(id)a0 behavior:(id)a1;
- (void)prepareForTransitionType:(unsigned long long)a0;
- (void)removeComponentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionContentFrame;
- (id)transitionContentView;
- (BOOL)transitionViewShouldFadeInContent;
- (BOOL)userInteractable;
- (BOOL)usesThumbnailWithImageIdentifier:(id)a0;
- (id)viewForDragManager:(id)a0;

@end
