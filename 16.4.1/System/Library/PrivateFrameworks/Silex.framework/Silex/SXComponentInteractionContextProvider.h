@class SXComponentInteraction, NSString;
@protocol SXActionManager, SXComponentInteractionHandlerManager;

@interface SXComponentInteractionContextProvider : NSObject <SXInteractionContextProviding>

@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> componentInteractionHandlerManager;
@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (weak, nonatomic) SXComponentInteraction *currentInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitPreviewViewController:(id)a0;
- (void).cxx_destruct;
- (id)contextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (id)initWithComponentInteractionHandlerManager:(id)a0 actionManager:(id)a1;
- (id)targetedPreviewAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (id)toolTipAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;

@end
