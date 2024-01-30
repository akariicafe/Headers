@class CKVocabularyDonateValidator, NSMutableArray, CKVOriginApp;

@interface CKVocabularyDonationBuilder : NSObject {
    CKVOriginApp *_originApp;
    long long _itemType;
    Class _mapperClass;
    NSMutableArray *_items;
    CKVocabularyDonateValidator *_validator;
}

- (id)build;
- (void).cxx_destruct;
- (id)addVocabularyItem:(id)a0 error:(id *)a1;
- (id)initWithOriginApp:(id)a0 itemClass:(Class)a1 error:(id *)a2;
- (long long)_addVocabularyItem:(id)a0;

@end
