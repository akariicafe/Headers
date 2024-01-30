@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsBundleId:(id)a0;
- (id)trie;

@end
