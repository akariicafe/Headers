@protocol SXURLActionFactory, SXArticleURLFactory, SXComponentInteractionHandler, SXComponentInteractionHandlerManager, SXActionComponentInteractionHandlerFactory;

@interface SXArticleLinkComponentView : SXContainerComponentView

@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly, nonatomic) id<SXActionComponentInteractionHandlerFactory> interactionHandlerFactory;
@property (readonly, nonatomic) id<SXURLActionFactory> URLActionFactory;
@property (readonly, nonatomic) id<SXArticleURLFactory> articleURLFactory;
@property (weak, nonatomic) id<SXComponentInteractionHandler> interactionHandler;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 mediaSharingPolicyProvider:(id)a4 interactionHandlerManager:(id)a5 interactionHandlerFactory:(id)a6 URLActionFactory:(id)a7 articleURLFactory:(id)a8;
- (void)loadComponent:(id)a0;

@end
