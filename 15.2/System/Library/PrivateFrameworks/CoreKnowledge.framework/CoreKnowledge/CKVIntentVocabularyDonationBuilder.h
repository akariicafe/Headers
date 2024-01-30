@class NSString, NSMutableDictionary;

@interface CKVIntentVocabularyDonationBuilder : NSObject {
    NSString *_appId;
    NSMutableDictionary *_vocabularyDictionary;
    unsigned long long _itemCounter;
}

- (id)build;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAppId:(id)a0;
- (void)addVocabularyItems:(id)a0 forIntentSlot:(id)a1;
- (id)_convertVocabularyDictionary;
- (id)_convertVocabularyItem:(id)a0 withCustomType:(unsigned short)a1;

@end
