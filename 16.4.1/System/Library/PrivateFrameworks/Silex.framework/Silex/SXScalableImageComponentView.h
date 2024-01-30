@class UIView, NSString, SXDragManager, SXFullscreenCanvasController, SXMediaViewEvent, SXImageResource, SXImageView;
@protocol SXMediaSharingPolicyProvider, SXImageViewFactory, SXFullscreenCanvasControllerFactory;

@interface SXScalableImageComponentView : SXMediaComponentView <SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXDragManagerDataSource>

@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly, nonatomic) id<SXFullscreenCanvasControllerFactory> canvasControllerFactory;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (readonly, nonatomic) SXImageView *imageView;
@property (retain, nonatomic) SXImageResource *imageResource;
@property (retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController;
@property (retain, nonatomic) SXMediaViewEvent *activeViewEvent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousContentFrame;
@property (weak, nonatomic) UIView *gestureView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)discardContents;
- (void).cxx_destruct;
- (void)layoutImageView;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (id)dragManager:(id)a0 dragableAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)imageView:(id)a0 didLoadAnimatedImage:(id)a1;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (id)componentTextStyleForIdentifier:(id)a0 inheritingFromComponentTextStyle:(id)a1;
- (id)contentSizeCategoryForCaption:(id)a0;
- (void)createMediaViewEvent;
- (void)finishMediaViewEvent;
- (id)fullScreenCanvasController:(id)a0 canvasViewControllerForShowable:(id)a1 completionBlock:(id /* block */)a2;
- (id)fullScreenCanvasController:(id)a0 captionForShowable:(id)a1 viewIndex:(unsigned long long)a2;
- (void)fullScreenCanvasController:(id)a0 didHideShowable:(id)a1 viewIndex:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenCanvasController:(id)a0 fullScreenFrameForShowable:(id)a1 viewIndex:(unsigned long long)a2 withinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (unsigned long long)fullScreenCanvasController:(id)a0 numberOfViewsForShowable:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenCanvasController:(id)a0 originalFrameForShowable:(id)a1 onCanvasView:(id)a2 viewIndex:(unsigned long long)a3;
- (id)fullScreenCanvasController:(id)a0 originalViewForShowable:(id)a1 viewIndex:(unsigned long long)a2;
- (void)fullScreenCanvasController:(id)a0 shouldAddGestureView:(id)a1 forShowable:(id)a2;
- (BOOL)fullScreenCanvasController:(id)a0 showable:(id)a1 gestureRecognizerShouldBegin:(id)a2;
- (void)fullScreenCanvasController:(id)a0 showable:(id)a1 shouldTransferToOriginalViewWithIndex:(unsigned long long)a2;
- (unsigned long long)fullScreenCanvasController:(id)a0 viewIndexForPoint:(struct CGPoint { double x0; double x1; })a1 inShowable:(id)a2;
- (void)fullScreenCanvasController:(id)a0 willHideShowable:(id)a1 viewIndex:(unsigned long long)a2;
- (void)fullScreenCanvasController:(id)a0 willReturnToFullscreenForShowable:(id)a1 viewIndex:(unsigned long long)a2;
- (BOOL)fullScreenCanvasController:(id)a0 willShowShowable:(id)a1 viewIndex:(unsigned long long)a2;
- (BOOL)gestureShouldBegin:(id)a0;
- (void)imageView:(id)a0 didLoadImage:(id)a1 ofQuality:(int)a2;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 imageViewFactory:(id)a6 canvasControllerFactory:(id)a7 mediaSharingPolicyProvider:(id)a8;
- (void)loadComponent:(id)a0;
- (BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)a0;
- (void)submitEvents;
- (id)textResizerForCaption:(id)a0;
- (id)textRulesForCaption:(id)a0;
- (id)textStyleForIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionContentFrame;
- (id)transitionContentView;
- (BOOL)usesThumbnailWithImageIdentifier:(id)a0;
- (id)viewForDragManager:(id)a0;

@end
