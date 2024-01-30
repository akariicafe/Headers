@class OVMarisaTrie;

@interface CDMVocTrie : NSObject {
    OVMarisaTrie *vocTextTrieReadOnly;
    OVMarisaTrie *vocLabelTrieReadOnly;
    OVMarisaTrie *vocSemanticTrieReadOnly;
}

+ (id)getTrieURLs:(id)a0;
+ (void)serializeVocSemanticTrieToFile:(id)a0 toURL:(id)a1;
+ (void)serializeVocLabelTrieToFile:(id)a0 semanticTrieReadOnly:(id)a1 toURL:(id)a2;
+ (void)serializeVocTextTrieToFile:(id)a0 readOnlyVocLabelTrie:(id)a1 readOnlyVocSemanticTrie:(id)a2 toURL:(id)a3;
+ (BOOL)serializeVocTriesToFile:(id)a0 toURL:(id)a1;

- (void).cxx_destruct;
- (id)initWithTriePath:(id)a0;
- (id)entriesForText:(id)a0;
- (long long *)getLabelTrieCount;
- (long long *)getTextTrieCount;

@end
