@class NLTagger;

@interface RELemmaEnumerator : NSObject {
    NLTagger *_tagger;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)enumerateLemmasInString:(id)a0 withBlock:(id /* block */)a1;

@end
