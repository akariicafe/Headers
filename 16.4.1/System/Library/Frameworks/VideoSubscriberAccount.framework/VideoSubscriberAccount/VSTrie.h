@class VSTrieNode;

@interface VSTrie : NSObject

@property (retain, nonatomic) VSTrieNode *root;

- (id)init;
- (void).cxx_destruct;
- (void)insertString:(id)a0 withAssociatedObject:(id)a1;
- (id)objectsMatchingPrefix:(id)a0;

@end
