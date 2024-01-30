@class NSObject;
@protocol OS_dispatch_queue, CKVSearchService;

@interface CKVocabularySearcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVSearchService> *_searchService;
}

+ (void)initialize;
+ (id)makeSearcher;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSearchService:(id)a0 dispatchQueue:(id)a1;
- (id)searchCustomVocabulary:(id)a0 appIds:(id)a1 vocabularyTypes:(id)a2;
- (id)searchCustomVocabularyWithWildcardPatterns:(id)a0 appIds:(id)a1 vocabularyTypes:(id)a2;
- (id)matchSpansOfUtterance:(id)a0;
- (id)matchSpansOfString:(id)a0;
- (BOOL)_validateAppIds:(id)a0 andAddToCriteria:(id)a1;
- (BOOL)_validateCustomTypes:(id)a0 andAddToCriteria:(id)a1;
- (BOOL)_validateUtteranceTokens:(id)a0;

@end
