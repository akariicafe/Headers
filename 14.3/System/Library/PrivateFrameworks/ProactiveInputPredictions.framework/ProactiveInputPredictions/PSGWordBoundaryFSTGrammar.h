@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PSGWordBoundaryFSTGrammar : NSObject {
    NSCache *_lmWrapperCache;
    NSObject<OS_dispatch_queue> *_lmWrapperQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void *)_createLexicon:(id)a0;
- (void *)_createLanguageModel:(id)a0;
- (void)clearLMCache;
- (id)_getLMWrapper:(id)a0;
- (id)_getPrimingToken:(void *)a0 transientTokenID:(unsigned int)a1;
- (id)triggerAttributesForContext:(id)a0 localeIdentifier:(id)a1;
- (void)warmUpForLocaleIdentifier:(id)a0;

@end
