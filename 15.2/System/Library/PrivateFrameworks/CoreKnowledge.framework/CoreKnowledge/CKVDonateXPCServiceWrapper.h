@class NSString, CKVXPCServiceBridge;

@interface CKVDonateXPCServiceWrapper : NSObject <CKVDonateServiceProvider, CKVDonateService> {
    CKVXPCServiceBridge *_xpcServiceBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)donateService;
- (void).cxx_destruct;
- (id)init;
- (oneway void)submitVocabularyDonation:(id)a0 completion:(id /* block */)a1;
- (oneway void)openVocabularyStreamOfType:(long long)a0 originApp:(id)a1 ready:(id /* block */)a2;
- (oneway void)produceVocabularyStream:(id)a0 completion:(id /* block */)a1;
- (oneway void)closeVocabularyStream:(id /* block */)a0;
- (oneway void)abortVocabularyStream;

@end
