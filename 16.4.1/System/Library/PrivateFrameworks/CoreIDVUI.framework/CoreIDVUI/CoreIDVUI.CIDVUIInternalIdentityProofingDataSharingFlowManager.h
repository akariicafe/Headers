@interface CoreIDVUI.CIDVUIInternalIdentityProofingDataSharingFlowManager : NSObject {
    void /* unknown type, empty encoding */ dataSharingFlowManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)checkUserConsent:(id /* block */)a0;
- (void)didChangeUserConsent:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchUserConsent:(id /* block */)a0;

@end
