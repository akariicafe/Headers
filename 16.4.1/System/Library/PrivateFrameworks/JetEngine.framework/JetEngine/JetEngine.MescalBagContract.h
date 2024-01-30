@interface JetEngine.MescalBagContract : NSObject <AMSMescalBagContract> {
    void /* unknown type, empty encoding */ backing;
}

@property (nonatomic, readonly) id mescalCertificateURL;
@property (nonatomic, readonly) id mescalSetupURL;
@property (nonatomic, readonly) id mescalPrimingURL;
@property (nonatomic, readonly) id mescalSignedActions;
@property (nonatomic, readonly) id mescalSignSapRequests;
@property (nonatomic, readonly) id mescalSignSapResponses;

- (id)init;
- (void).cxx_destruct;

@end
