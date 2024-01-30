@class NSObject, CKVStreamManager, CKVIndexUpdater;
@protocol OS_dispatch_queue;

@interface CKVDonateServiceConnection : CKVServiceConnection <CKVDonateService> {
    CKVIndexUpdater *_indexUpdater;
    CKVStreamManager *_streamManager;
    NSObject<OS_dispatch_queue> *_consumerQueue;
    BOOL _streamDonationResult;
}

- (void).cxx_destruct;
- (oneway void)submitVocabularyDonation:(id)a0 completion:(id /* block */)a1;
- (oneway void)openVocabularyStreamOfType:(long long)a0 originApp:(id)a1 ready:(id /* block */)a2;
- (oneway void)produceVocabularyStream:(id)a0 completion:(id /* block */)a1;
- (oneway void)closeVocabularyStream:(id /* block */)a0;
- (oneway void)abortVocabularyStream;
- (id)initWithServiceQueue:(id)a0 indexManager:(id)a1 settings:(id)a2;
- (id)initWithServiceQueue:(id)a0 indexManager:(id)a1 settings:(id)a2 streamManager:(id)a3;

@end
