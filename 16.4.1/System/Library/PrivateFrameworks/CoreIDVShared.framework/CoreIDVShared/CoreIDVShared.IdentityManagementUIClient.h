@interface CoreIDVShared.IdentityManagementUIClient : NSObject <CoreIDVShared.IdentityManagementUIProtocol> {
    void /* unknown type, empty encoding */ serverConnection;
    void /* unknown type, empty encoding */ disconnectHandler;
    void /* unknown type, empty encoding */ remoteObjectProxy;
    void /* unknown type, empty encoding */ remoteObjectProxyError;
}

- (id)init;
- (void).cxx_destruct;
- (void)proofingFlowAvailability:(id /* block */)a0;
- (void)deleteBoundACLWithCompletion:(id /* block */)a0;
- (void)fetchBioBindingDetailsWithCompletion:(id /* block */)a0;
- (void)fetchBiomeFedStatsUIWithCompletion:(id /* block */)a0;
- (void)fetchImageQualitySettingsWithCompletion:(id /* block */)a0;
- (void)fetchTermsAndConditionsWithCompletion:(id /* block */)a0;
- (void)getLivenessConfigWithCompletion:(id /* block */)a0;
- (void)isWatchPaired:(id /* block */)a0;
- (void)prepareForProofingDisplay:(id)a0 proofingOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)prepareForProofingIdentity:(id)a0 completion:(id /* block */)a1;
- (void)proofIdentity:(id)a0 :(unsigned long long)a1 :(BOOL)a2 totalUploadAssetsFileSizeInBytes:(long long)a3 completion:(id /* block */)a4;
- (void)proofIdentityUsing:(id)a0 proofingOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)proofingCancelled:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)provisionIdentityWithState:(id)a0 proofingOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)retrieveBioBindingUnboundACL:(id /* block */)a0;
- (void)retrieveBoundACL:(id /* block */)a0;
- (void)retrievePasscodeBindingUnboundACL:(id /* block */)a0;
- (void)saveIdentityProofingBiomeDataSharingUserConsent:(BOOL)a0 state:(id)a1 proofingOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setGlobalBoundACLWithData:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setModifiedGlobalBoundACLWithData:(id)a0 externalizedLAContext:(id)a1 completion:(id /* block */)a2;
- (void)triggerAssetsUploadWithProofingOptions:(unsigned long long)a0 canUploadOnExpensiveNetwork:(BOOL)a1 completion:(id /* block */)a2;
- (void)uploadLivenessVideoWithLivenessVideoURL:(id)a0 shouldScheduleUploads:(BOOL)a1 withCompletion:(id /* block */)a2;

@end
