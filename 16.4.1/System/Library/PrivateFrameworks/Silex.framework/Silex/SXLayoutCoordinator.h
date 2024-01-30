@class NSString, SXLayoutBlueprintProvider, SXDelayed, SXDOMObjectProvider, SXLayoutParametersManager, SXLayoutOptions;
@protocol SXLayoutPipeline, SXLayoutCoordinatorDelegate, SXLayoutIntegrator, SXLayoutInvalidationManager, SXLayoutPolicyManager, SXLayoutInstructionFactory, SXDocumentProviding;

@interface SXLayoutCoordinator : NSObject <SXLayoutPipelineDelegate, SXLayoutInvalidationManagerDelegate, SXLayoutCoordinator>

@property (readonly, nonatomic) id<SXLayoutPipeline> pipeline;
@property (readonly, nonatomic) id<SXLayoutIntegrator> integrator;
@property (readonly, nonatomic) id<SXLayoutInstructionFactory> instructionFactory;
@property (readonly, nonatomic) id<SXLayoutInvalidationManager> invalidationManager;
@property (readonly, nonatomic) SXLayoutBlueprintProvider *blueprintProvider;
@property (readonly, nonatomic) SXDOMObjectProvider *DOMObjectProvider;
@property (readonly, nonatomic) SXLayoutParametersManager *layoutParametersManager;
@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) id<SXLayoutPolicyManager> layoutPolicyManager;
@property (retain, nonatomic) SXLayoutOptions *layoutOptions;
@property (retain, nonatomic) SXDelayed *debouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXLayoutCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)startTask:(id)a0;
- (id)initWithPipeline:(id)a0 integrator:(id)a1 instructionFactory:(id)a2 invalidationManager:(id)a3 blueprintProvider:(id)a4 DOMObjectProvider:(id)a5 layoutParametersManager:(id)a6 documentProvider:(id)a7 layoutPolicyManager:(id)a8;
- (void)layoutInvalidationManager:(id)a0 didInvalidateBlueprint:(id)a1;
- (void)layoutPipeline:(id)a0 finishedTask:(id)a1 withResult:(id)a2;
- (void)layoutWithOptions:(id)a0;
- (id)taskWithOptions:(id)a0 layoutBlueprint:(id)a1 instructions:(id)a2;

@end
