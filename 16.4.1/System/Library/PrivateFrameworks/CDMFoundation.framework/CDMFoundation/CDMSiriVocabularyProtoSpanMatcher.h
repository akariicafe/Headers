@class CKVocabularySearcher, NSArray, NSString, CKVocabularySandbox;

@interface CDMSiriVocabularyProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    CKVocabularySearcher *_searcher;
    CKVocabularySandbox *_sandbox;
}

@property (readonly) NSArray *overrideSpans;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildCKVTokenChain:(id)a0;
+ (id)convertCDMTokenToCKVToken:(id)a0;
+ (id)convertCKVMatchingSpanToNLUTypesMatchingSpan:(id)a0 tokenChain:(id)a1;
+ (id)convertCKVMatchingSpans:(id)a0 tokenChain:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)sandboxId;
- (id)callSearcher:(id)a0;
- (id)initWithOverrideSpans:(id)a0;
- (id)initWithSandboxId:(id)a0;
- (id)initWithSearcher:(id)a0;
- (id)matchSpansForTokenChain:(id)a0;

@end
