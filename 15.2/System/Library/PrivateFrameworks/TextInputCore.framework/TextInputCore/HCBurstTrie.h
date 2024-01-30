@interface HCBurstTrie : NSObject

@property (nonatomic) struct _CFBurstTrie { } *burstTrie;
@property (readonly, nonatomic) unsigned long long keysAdded;

+ (id)burstTrieFromFile:(id)a0;

- (id)init;
- (BOOL)writeToFile:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)payloadForKey:(id)a0;
- (void)_createUnderlyingBurstTrie;

@end
