@class NSString;

@interface _TtC15AACDependenciesP33_830CC5511C96B2B1095DA770BDD7083443AEDNonPersistingResultBasedActivationRunner : _TtCs12_SwiftObject <AEPolicyActivation> {
    void /* unknown type, empty encoding */ activation;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long event;

- (void)prepareForActivationWithScratchpad:(id)a0;
- (id)deactivationForScratchpad:(id)a0;
- (void)activateWithInvalidationHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
