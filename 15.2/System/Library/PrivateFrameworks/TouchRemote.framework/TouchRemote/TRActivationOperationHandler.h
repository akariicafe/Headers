@class NSString;

@interface TRActivationOperationHandler : NSObject <TROperationHandler>

@property (copy, nonatomic) id /* block */ activationHandler;
@property (copy, nonatomic) id /* block */ activationHandlerWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerMessageHandlersForSession:(id)a0;
- (id)initWithActivationHandler:(id /* block */)a0;
- (void)_handleActivationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (id)initWithActivationHandlerWithError:(id /* block */)a0;

@end
