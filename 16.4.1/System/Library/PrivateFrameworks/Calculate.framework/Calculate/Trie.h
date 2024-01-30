@class NSMutableArray, TrieNode;

@interface Trie : NSObject {
    BOOL _autocompress;
    TrieNode *_root;
}

@property (nonatomic) char *characters;
@property (nonatomic) int characterCount;
@property (nonatomic) int characterSize;
@property (nonatomic) struct { unsigned int x0 : 24; unsigned char x1 : 8; unsigned int x2; unsigned int x3; } *nodes;
@property (nonatomic) int nodeCount;
@property (nonatomic) int nodeSize;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) int *firstByteCache;
@property (nonatomic) BOOL compressed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)writeCharacter:(unsigned char)a0;
- (void)writeNode:(struct { unsigned int x0 : 24; unsigned char x1 : 8; unsigned int x2; unsigned int x3; })a0;

@end
