@interface CoreIDVShared.IdentityManagementUIClient : NSObject <CoreIDVShared.IdentityManagementUIProtocol> {
    void /* unknown type, empty encoding */ serverConnection;
    void /* unknown type, empty encoding */ disconnectHandler;
    void /* unknown type, empty encoding */ remoteObjectProxy;
    void /* unknown type, empty encoding */ remoteObjectProxyError;
}

- (void).cxx_destruct;
- (void)proofingFlowAvailability:(id /* block */)a0;
- (id)init;
- (void)prepareForProofingDisplay:(id)a0 proofingOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)prepareForProofingIdentity:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageQualitySettingsWithCompletion:(id /* block */)a0;
- (void)proofIdentity:(id)a0 :(unsigned long long)a1 :(BOOL)a2 totalUploadAssetsFileSizeInBytes:(long long)a3 completion:(id /* block */)a4;
- (void)proofIdentityUsing:(id)a0 proofingOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)proofingCancelled:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)isWatchPaired:(id /* block */)a0;
- (void)setGlobalBoundACLWithData:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setModifiedGlobalBoundACLWithData:(id)a0 externalizedLAContext:(id)a1 completion:(id /* block */)a2;
- (void)retrieveBioBindingUnboundACL:(id /* block */)a0;
- (void)retrievePasscodeBindingUnboundACL:(id /* block */)a0;
- (void)retrieveBoundACL:(id /* block */)a0;
- (void)deleteBoundACLWithCompletion:(id /* block */)a0;
- (void)uploadLivenessVideoWithLivenessVideoURL:(id)a0 shouldScheduleUploads:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)provisionIdentityWithState:(id)a0 proofingOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getLivenessConfigWithCompletion:(id /* block */)a0;
- (void)fetchTermsAndConditionsWithCompletion:(id /* block */)a0;
- (void)triggerAssetsUploadWithProofingOptions:(unsigned long long)a0 canUploadOnExpensiveNetwork:(BOOL)a1 completion:(id /* block */)a2;

@end
