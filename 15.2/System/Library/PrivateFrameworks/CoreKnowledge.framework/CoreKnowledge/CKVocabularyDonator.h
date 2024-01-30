@class NSObject, NSString, CKVOriginApp;
@protocol OS_dispatch_queue, CKVDonateService, CKVDonateAuthorization;

@interface CKVocabularyDonator : NSObject {
    CKVOriginApp *_originApp;
    NSObject<CKVDonateService> *_donateService;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_donatorName;
    NSObject<CKVDonateAuthorization> *_authorization;
}

+ (void)initialize;
+ (id)_donatorNameWithOriginApp:(id)a0;
+ (id)donatorWithOriginAppId:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginApp:(id)a0 donateService:(id)a1 dispatchQueue:(id)a2 authorization:(id)a3;
- (void)replaceAllVocabularyOfClass:(Class)a0 withVocabulary:(id)a1 completion:(id /* block */)a2;
- (void)updateAllVocabularyOfClass:(Class)a0 usingStream:(id /* block */)a1;
- (id)_buildDonationWithVocabularyItems:(id)a0 ofClass:(Class)a1 error:(id *)a2;
- (void)_processDonation:(id)a0 itemClass:(Class)a1 completion:(id /* block */)a2;
- (BOOL)_isItemClassSupportedAndWhitelisted:(Class)a0 error:(id *)a1;

@end
