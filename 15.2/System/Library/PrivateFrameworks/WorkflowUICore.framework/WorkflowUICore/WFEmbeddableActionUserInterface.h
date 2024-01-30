@class UIViewController;

@interface WFEmbeddableActionUserInterface : WFActionUserInterface

@property (retain, nonatomic) UIViewController *contentViewController;

- (void).cxx_destruct;
- (BOOL)prefersModalPresentation;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)presentContent:(id)a0;
- (BOOL)presentContent:(id)a0 completion:(id /* block */)a1;

@end
