@class SXDragManager;

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource>

@property (retain, nonatomic) SXDragManager *dragManager;

- (id)hostingView;
- (void).cxx_destruct;
- (id)dragManager:(id)a0 dragableAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)forceImageViewFullscreen:(id)a0;
- (id)imageViewForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 mediaSharingPolicyProvider:(id)a6;
- (id)viewForDragManager:(id)a0;

@end
