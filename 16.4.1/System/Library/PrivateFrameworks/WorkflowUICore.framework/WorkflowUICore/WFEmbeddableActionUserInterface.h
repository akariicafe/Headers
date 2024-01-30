@class UIViewController;

@interface WFEmbeddableActionUserInterface : WFActionUserInterface

@property (retain, nonatomic) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (BOOL)prefersModalPresentation;
- (void)presentContent:(id)a0;
- (BOOL)presentContent:(id)a0 completion:(id /* block */)a1;

@end
