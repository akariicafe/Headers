@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (id)trie;
- (BOOL)containsBundleId:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
