@class VUIContextMenuCardView, NSString, IKViewElement;

@interface VUIContextMenuTemplateController : _TVBgImageLoadingViewController <VUIContextMenuTemplateControllerInterface>

@property (retain, nonatomic) VUIContextMenuCardView *cardView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic) BOOL canPerformAction;
@property (retain, nonatomic) IKViewElement *selectedElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)a0;
- (void)didDismissTemplateController;
- (void)didSelectPreviewTemplateController;
- (void)_performAction;
- (void)_updateInteractionMenuItems:(id)a0;
- (id)_shareActionSheetFromViewElement:(id)a0;

@end
