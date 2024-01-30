@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRRMultimodalMentionResolver : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct unique_ptr<marrs::mrr::mr::MROrchestrator, std::default_delete<marrs::mrr::mr::MROrchestrator>> { struct __compressed_pair<marrs::mrr::mr::MROrchestrator *, std::default_delete<marrs::mrr::mr::MROrchestrator>> { struct MROrchestrator *__value_; } __ptr_; } _mrOrchestrator;
    NSString *_locale;
}

+ (id)sharedManager;
+ (id)name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0 forLocale:(id)a1 status:(id *)a2;
- (id)resolveCandidatesForUtterance:(id)a0 entities:(id)a1 maximumCandidates:(unsigned long long)a2 status:(id *)a3;
- (BOOL)resolveCandidatesForUtterance:(id)a0 entities:(id)a1 maximumCandidates:(unsigned long long)a2 status:(id *)a3 completionBlock:(id /* block */)a4;
- (BOOL)resolveCandidatesForUtterance:(id)a0 mentions:(id)a1 entities:(id)a2 maximumCandidates:(unsigned long long)a3 status:(id *)a4 completionBlock:(id /* block */)a5;
- (BOOL)resolveCandidatesForUtterance:(id)a0 status:(id *)a1 completionBlock:(id /* block */)a2;
- (id)resolveCandidatesForUtterance:(id)a0 utteranceTokens:(id)a1 tokenEmbeddings:(id)a2 entities:(id)a3 maximumCandidates:(unsigned long long)a4 status:(id *)a5;
- (BOOL)resolveCandidatesForUtterance:(id)a0 utteranceTokens:(id)a1 tokenEmbeddings:(id)a2 entities:(id)a3 maximumCandidates:(unsigned long long)a4 status:(id *)a5 completionBlock:(id /* block */)a6;
- (BOOL)resolveCandidatesForUtterance:(id)a0 utteranceTokens:(id)a1 tokenEmbeddings:(id)a2 mentions:(id)a3 entities:(id)a4 maximumCandidates:(unsigned long long)a5 status:(id *)a6 completionBlock:(id /* block */)a7;
- (id)resolveMentionsInUtterance:(id)a0 mentions:(id)a1 entities:(id)a2 maximumCandidates:(unsigned long long)a3 status:(id *)a4;
- (id)resolveMentionsInUtterance:(id)a0 status:(id *)a1;
- (id)resolveMentionsInUtterance:(id)a0 utteranceTokens:(id)a1 tokenEmbeddings:(id)a2 mentions:(id)a3 entities:(id)a4 maximumCandidates:(unsigned long long)a5 status:(id *)a6;
- (id)resolveReferencesInUtteranceImpl:(id)a0 status:(id *)a1;

@end
