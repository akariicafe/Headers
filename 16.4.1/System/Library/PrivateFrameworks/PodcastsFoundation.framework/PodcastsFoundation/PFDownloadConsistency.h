@interface PFDownloadConsistency : NSObject {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ resolutionStrategy;
    void /* unknown type, empty encoding */ effectApplicator;
    void /* unknown type, empty encoding */ environment;
}

- (id)init;
- (void).cxx_destruct;
- (void)beginEnforcementWithCompletionHandler:(id /* block */)a0;
- (void)endEnforcement;

@end
