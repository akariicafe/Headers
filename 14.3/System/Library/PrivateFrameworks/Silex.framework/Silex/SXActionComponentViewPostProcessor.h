@class NSString;
@protocol SXActionProvider, SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;

@interface SXActionComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>

@property (readonly, nonatomic) id<SXActionProvider> actionProvider;
@property (readonly, nonatomic) id<SXActionComponentInteractionHandlerFactory> factory;
@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionProvider:(id)a0 interactionHandlerFactory:(id)a1 interactionHandlerManager:(id)a2;
- (void)processComponent:(id)a0 view:(id)a1;

@end
