@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRRMultimodalMentionDetector : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct unique_ptr<marrs::mrr::md::MRRMentionDetectorInterface, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> { struct __compressed_pair<marrs::mrr::md::MRRMentionDetectorInterface *, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> { struct MRRMentionDetectorInterface *__value_; } __ptr_; } _mentionDetector;
    NSString *_locale;
}

+ (id)sharedManager;
+ (id)name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)detectMentionsInUtterance:(id)a0 maximumCandidates:(unsigned long long)a1 status:(id *)a2;
- (BOOL)detectMentionsInUtterance:(id)a0 maximumCandidates:(unsigned long long)a1 status:(id *)a2 completionBlock:(id /* block */)a3;
- (id)detectMentionsInUtterance:(id)a0 status:(id *)a1;
- (BOOL)detectMentionsInUtterance:(id)a0 status:(id *)a1 completionBlock:(id /* block */)a2;
- (id)detectMentionsInUtterance:(id)a0 utteranceTokens:(id)a1 tokenEmbeddings:(id)a2 maximumCandidates:(unsigned long long)a3 status:(id *)a4;
- (BOOL)detectMentionsInUtterance:(id)a0 utteranceTokens:(id)a1 tokenEmbeddings:(id)a2 maximumCandidates:(unsigned long long)a3 status:(id *)a4 completionBlock:(id /* block */)a5;
- (id)detectMentionsInUtteranceImpl:(id)a0 status:(id *)a1;
- (id)detectMentionsInUtteranceRequest:(id)a0 status:(id *)a1;
- (id)initWithAssets:(id)a0 forLocale:(id)a1 status:(id *)a2;

@end
