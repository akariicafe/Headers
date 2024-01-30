@class VUIInAppMessagingMessageTargetHandler, UIVisualEffectView, _TVStackTemplateController;

@interface VUICanvasAppDocumentServiceViewController : VUIAppDocumentServiceViewController {
    VUIInAppMessagingMessageTargetHandler *_iamMessageTarget;
    BOOL _iamBannerEnabled;
    BOOL _navBarHidden;
}

@property (weak, nonatomic) _TVStackTemplateController *stackTemplate;
@property (retain, nonatomic) UIVisualEffectView *statusBarGradientView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)documentDidUpdate:(id)a0;
- (id)initWithDocumentServiceRequest:(id)a0 loadImmediately:(BOOL)a1 documentRef:(id)a2 viewControllerIdentifier:(id)a3 viewControllerDocumentIdentifier:(id)a4;
- (void)_updateNavigationBarWithDocument:(id)a0;
- (void)didCompleteDocumentCreationWithStatus:(long long)a0 errorDictionary:(id)a1;
- (void)didHostTemplateViewController:(id)a0 usedTransitions:(BOOL)a1;

@end
