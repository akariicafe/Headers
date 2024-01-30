@class NSString, NSMapTable, NSHashTable;

@interface HMETrieNode : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSMapTable *children;
@property (readonly, nonatomic) NSHashTable *consumers;

- (void).cxx_destruct;

@end
