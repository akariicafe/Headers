@class NSString;

@interface TRCompanionAuthOperationHandler : NSObject <TROperationHandler>

@property (copy, nonatomic) id /* block */ companionAuthHandler;
@property (copy, nonatomic) id /* block */ companionAuthHandlerWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerMessageHandlersForSession:(id)a0;
- (void)_handleCompanionAuthenticationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (id)initWithCompanionAuthHandler:(id /* block */)a0;
- (id)initWithCompanionAuthHandlerWithError:(id /* block */)a0;

@end
