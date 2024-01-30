@class HCIndexTable, NSUUID, HCBurstTrie;

@interface HCHuffmanCoder : NSObject

@property (retain, nonatomic) HCBurstTrie *burstTrie;
@property (retain, nonatomic) HCIndexTable *indexTable;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSUUID *versionUUID;

+ (id)characterCoderForLocale:(id)a0;
+ (id)wordCoderForLocale:(id)a0;
+ (id)coderMatchingName:(id)a0 locale:(id)a1;
+ (id)coderFromBurstTrieFile:(id)a0 indexTableFile:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBurstTrie:(id)a0 indexTable:(id)a1;
- (id)codeForKey:(id)a0;
- (id)stringCodeForKey:(id)a0;

@end
