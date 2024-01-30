@class NSObject, CKVOriginApp, CKVocabularyDonateValidator, NSMutableArray;
@protocol CKVDonateService;

@interface CKVocabularyDonateStream : NSObject {
    CKVOriginApp *_originApp;
    Class _mapperClass;
    NSMutableArray *_items;
    CKVocabularyDonateValidator *_validator;
    NSObject<CKVDonateService> *_donateService;
    unsigned long long _batchSize;
}

+ (id)streamWithOriginApp:(id)a0 itemClass:(Class)a1 donateService:(id)a2;

- (void)finish:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)openStream:(id /* block */)a0;
- (BOOL)addVocabularyItem:(id)a0 error:(id *)a1;
- (id)initWithOriginApp:(id)a0 itemClass:(Class)a1 donateService:(id)a2 batchSize:(unsigned long long)a3;

@end
