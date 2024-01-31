@class NSString;

@interface _TtC9AACClientP33_EFD39109592C6EDA2BBCB1B6AD748AF525AECPolicyActivationRunner : _TtCs12_SwiftObject <AEPolicyActivation> {
    void /* unknown type, empty encoding */ activation;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long event;

- (void)activateWithScratchpad:(id)a0 invalidationHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)deactivationForScratchpad:(id)a0;

@end
