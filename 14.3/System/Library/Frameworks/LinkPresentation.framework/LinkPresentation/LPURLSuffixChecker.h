@class NSMutableArray;

@interface LPURLSuffixChecker : NSObject {
    struct { unsigned short x0[27]; } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasSuffix:(id)a0;
- (void)addStringToFailedSuffixes:(id)a0;
- (BOOL)hasSuffix:(id)a0 remainingPrefix:(id *)a1;
- (id)initWithSuffixes:(id)a0;
- (BOOL)insertString:(id)a0 intoTrieWithCache:(struct { struct { unsigned short x0; unsigned short x1; } x0[32]; unsigned long long x1; } *)a1;

@end
