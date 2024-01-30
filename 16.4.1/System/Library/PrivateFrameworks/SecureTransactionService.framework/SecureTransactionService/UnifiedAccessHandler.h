@class NSString, NFUnifiedAccessSession;

@interface UnifiedAccessHandler : STSTransactionHandler <NFUnifiedAccessSessionDelegate> {
    NFUnifiedAccessSession *_nfSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)stopTransaction;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (void)unifiedAccessSession:(id)a0 didDetectField:(BOOL)a1;
- (void)unifiedAccessSession:(id)a0 didEndTransaction:(id)a1;
- (void)unifiedAccessSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)unifiedAccessSession:(id)a0 didExpireTransactionForApplet:(id)a1;
- (void)unifiedAccessSession:(id)a0 didExpressModeStateChange:(unsigned int)a1 withObject:(id)a2;
- (void)unifiedAccessSession:(id)a0 didStartTransaction:(id)a1;
- (id)startNFSessionWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;
- (void)unifiedAccessSession:(id)a0 didSelectApplet:(id)a1;

@end
