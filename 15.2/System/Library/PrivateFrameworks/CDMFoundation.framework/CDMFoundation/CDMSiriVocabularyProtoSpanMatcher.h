@class CKVocabularySearcher, NSString, NSArray, CKVocabularySandbox;

@interface CDMSiriVocabularyProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    CKVocabularySearcher *_searcher;
    CKVocabularySandbox *_sandbox;
    NSArray *_overrideSpans;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertCDMTokenToCKVToken:(id)a0;
+ (id)convertCKVMatchingSpanToNLUTypesMatchingSpan:(id)a0 tokenChain:(id)a1;
+ (id)buildCKVTokenChain:(id)a0;
+ (id)convertCKVMatchingSpans:(id)a0 tokenChain:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)sandboxId;
- (id)initWithSearcher:(id)a0;
- (id)initWithOverrideSpans:(id)a0;
- (id)initWithSandboxId:(id)a0;
- (id)matchSpansForTokenChain:(id)a0;
- (id)callSearcher:(id)a0;

@end
