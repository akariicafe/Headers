@class SXComponentView;
@protocol SXWebContentComponentInteractionHandlerFactory, SXComponentInteractionHandler, SWInteractionProvider, SXComponentInteractionHandlerManager;

@interface SXWebContentComponentInteractionManager : NSObject

@property (readonly, weak, nonatomic) SXComponentView *componentView;
@property (readonly, nonatomic) id<SWInteractionProvider> interactionProvider;
@property (readonly, weak, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly, nonatomic) id<SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;
@property (retain, nonatomic) id<SXComponentInteractionHandler> currentInteractionHandler;

- (void).cxx_destruct;
- (id)initWithComponentView:(id)a0 interactionProvider:(id)a1 interactionHandlerManager:(id)a2 componentInteractionHandlerFactory:(id)a3;
- (void)manageInteractionHandlerForInteraction:(id)a0;

@end
