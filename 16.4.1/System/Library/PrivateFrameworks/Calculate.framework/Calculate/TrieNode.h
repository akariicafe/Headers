@class Trie;

@interface TrieNode : NSObject

@property (weak, nonatomic) Trie *trie;
@property (nonatomic) int node;
@property (nonatomic) int offset;

- (void).cxx_destruct;

@end
