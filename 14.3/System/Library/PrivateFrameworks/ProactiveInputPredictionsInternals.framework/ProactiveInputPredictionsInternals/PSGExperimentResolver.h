@class NSDictionary, _PASLock;

@interface PSGExperimentResolver : NSObject {
    NSDictionary *_zkwLangAndNamespaces;
    _PASLock *_responseSuggestionsConfigLock;
    NSDictionary *_wordBoundaryLangAndNamespaces;
    _PASLock *_wordBoundaryConfigLock;
}

+ (id)sharedInstance;

- (id)_getDefaultWordBoundarySuggestionsExperimentConfig:(id)a0;
- (id)init;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)a0;
- (void).cxx_destruct;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)a0;
- (id)getResponseSuggestionsExperimentConfig:(id)a0;

@end
