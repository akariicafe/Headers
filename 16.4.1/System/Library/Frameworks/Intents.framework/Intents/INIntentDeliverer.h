@class NSString, INExtensionContextIntentResponseObserver, NSObject;
@protocol OS_dispatch_queue, INIntentDeliveringDelegate;

@interface INIntentDeliverer : NSObject <INIntentParameterOptionsProviding, INIntentDelivering>

@property (retain, nonatomic) INExtensionContextIntentResponseObserver *getRideStatusObserver;
@property (retain, nonatomic) INExtensionContextIntentResponseObserver *getCarPowerLevelObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (weak, nonatomic) id<INIntentDeliveringDelegate> delegate;

+ (void)initialize;

- (void)_deliverIntent:(id)a0 withBlock:(id /* block */)a1;
- (void)_stopSendingUpdatesForIntent:(id)a0 fromConnection:(id)a1 completionHandler:(id /* block */)a2;
- (void)resolveIntentParameters:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithQueue:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)handleIntent:(id)a0 withCompletion:(id /* block */)a1;
- (void)startSendingUpdatesForIntent:(id)a0 toObserver:(id)a1 completionHandler:(id /* block */)a2;
- (void)getSupportsParameterOptionsForParameterNamed:(id)a0 intent:(id)a1 completionHandler:(id /* block */)a2;
- (void)_processIntent:(id)a0 intentResponse:(id)a1 completion:(id /* block */)a2;
- (void)getParameterOptionsForParameterNamed:(id)a0 intent:(id)a1 searchTerm:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)_updateIntent:(id)a0 intentSlotDescription:(id)a1 resolutionResultDataProvider:(id)a2;
- (id /* block */)_processOptionsForIntent:(id)a0 parameterNamed:(id)a1 completionHandler:(id /* block */)a2;
- (void)_invokeIntentHandlerMethodForIntent:(id)a0 intentHandler:(id)a1 parameterNamed:(id)a2 keyForSelectors:(id)a3 executionHandler:(id /* block */)a4 unimplementedHandler:(id /* block */)a5;
- (void)resolveIntentParameter:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (id /* block */)_processResolutionDataProviderForIntent:(id)a0 intentSlotDescription:(id)a1 updateIntent:(BOOL)a2 completion:(id /* block */)a3;
- (void)getIntentParameterDefaultValue:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (void)_resolveIntentParameter:(id)a0 forIntent:(id)a1 intentHandler:(id)a2 updateIntent:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)getIntentParameterOptions:(id)a0 forIntent:(id)a1 searchTerm:(id)a2 completionBlock:(id /* block */)a3;
- (void)confirmIntent:(id)a0 withCompletion:(id /* block */)a1;
- (void)stopSendingUpdatesForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startSendingUpdatesForIntent:(id)a0 toObserver:(id)a1 fromConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)_processDefaultValue:(id)a0 forIntent:(id)a1 parameterNamed:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id /* block */)_processIntentResponseCompletionHandlerWithIntent:(id)a0 completion:(id /* block */)a1;

@end
