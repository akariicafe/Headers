@class NLTagger;

@interface RELemmaEnumerator : NSObject {
    NLTagger *_tagger;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)enumerateLemmasInString:(id)a0 withBlock:(id /* block */)a1;

@end
