@class NSString, WFCompactHighlightedView, WFContentCollection, WFCompactContentPreviewViewController, UIViewController;

@interface WFShowContentDialogViewController : WFCompactDialogViewController <WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate>

@property (retain, nonatomic) UIViewController *containerViewController;
@property (weak, nonatomic) WFCompactHighlightedView *highlightView;
@property (retain, nonatomic) WFCompactContentPreviewViewController *previewViewController;
@property (retain, nonatomic) WFContentCollection *dataSource;
@property (copy, nonatomic) id /* block */ installThumbnailHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewController:(id)a0 frameForPreviewItem:(id)a1 inSourceView:(id *)a2;
- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)previewControllerWillDismiss:(id)a0;
- (void)updateActions;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (void)handleTapGesture:(id)a0;
- (double)targetHeightForAnimatingPreviewViewController:(id)a0 toProposedHeight:(double)a1;
- (BOOL)allowsInteractiveDismiss;
- (void)askContainerForHomeGestureUpdate;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (double)contentHeightWithPreferredHeight:(double)a0 maxVisibleHeight:(double)a1;
- (BOOL)hasCustomHomeGestureBehavior;
- (void)homeGestureDidPassThreshold;
- (void)presentFullScreenPreview;
- (void)previewViewControllerDidInvalidateSize:(id)a0;
- (id)sourceViewForQuickLook;

@end
