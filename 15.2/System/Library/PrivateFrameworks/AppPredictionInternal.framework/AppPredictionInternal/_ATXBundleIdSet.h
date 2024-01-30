@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (id)trie;
- (BOOL)containsBundleId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
