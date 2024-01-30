@class NSString, NSMapTable, SXViewport;

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager>

@property (readonly, nonatomic) NSMapTable *interactionHandlers;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewport:(id)a0;
- (void)addInteractionHandler:(id)a0 componentView:(id)a1 types:(unsigned long long)a2;
- (id)componentViewForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)interactionsForComponentView:(id)a0;
- (id)interactionsForComponentView:(id)a0 type:(unsigned long long)a1;
- (void)removeInteractionHandler:(id)a0 componentView:(id)a1;
- (void)updateUserInteractionForComponentView:(id)a0;

@end
