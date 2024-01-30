@class NSString;

@interface _TtC15AACDependenciesP33_90CA6DB496A26408405A037423E1919130AEDSynchronousActivationRunner : _TtCs12_SwiftObject <AEPolicyActivation> {
    void /* unknown type, empty encoding */ activation;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long event;

- (void)prepareForActivationWithScratchpad:(id)a0;
- (id)deactivationForScratchpad:(id)a0;
- (void)activateWithInvalidationHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
