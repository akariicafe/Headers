@interface VUIAppDocumentCanonicalServiceViewController : VUIAppDocumentServiceViewController

- (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 viewElement:(id)a2 extraInfo:(id *)a3;
- (id)initWithDocumentServiceRequest:(id)a0 loadImmediately:(BOOL)a1 documentRef:(id)a2 viewControllerIdentifier:(id)a3 viewControllerDocumentIdentifier:(id)a4;
- (BOOL)automaticallyProvidesMediaController;

@end
