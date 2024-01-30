@class NSMutableDictionary, TSUNoCopyDictionary, NSMutableSet, TSUSparseArray;

@interface TSKCustomFormatList : TSPObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *formatsByKeyDictionary;
@property (retain, nonatomic) TSUNoCopyDictionary *keysByFormatDictionary;
@property (retain, nonatomic) TSUNoCopyDictionary *keysByFormatWithNameStemMatching;
@property (retain, nonatomic) TSUSparseArray *keysByIndex;
@property (retain, nonatomic) TSUNoCopyDictionary *indexesByKey;
@property (retain, nonatomic) NSMutableSet *namesList;
@property (nonatomic) BOOL upgradingDone;
@property (nonatomic) BOOL importingDone;
@property (nonatomic) BOOL importing;
@property (nonatomic) BOOL upgrading;

+ (void)archiveKeys:(id)a0 message:(void *)a1;
+ (id)unarchiveKeys:(const void *)a0;

- (void)removeAll;
- (id)allKeys;
- (id)initWithContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)customFormatForKey:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)keyForCustomFormat:(id)a0;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)a0;
- (id)addCustomFormat:(id)a0 oldKey:(id)a1 fuzzyNameMatching:(BOOL)a2;
- (id)upgradedCustomFormatKeyForLegacyID:(unsigned int)a0;
- (void)p_addCustomFormatToNameStemDict:(id)a0 key:(id)a1;
- (void)p_setCustomFormat:(id)a0 key:(id)a1 legacyKey:(unsigned int)a2;
- (id)p_keyForFormatUsingNameStem:(id)a0;
- (void)p_setCustomFormat:(id)a0 key:(id)a1;
- (void)p_removeCustomFormatFromNameStemDict:(id)a0 key:(id)a1;
- (void)removeCustomFormatForKey:(id)a0;
- (void)removeCustomFormatsForKeys:(id)a0;
- (id)addedKeysRelativeTo:(id)a0;
- (BOOL)hasFormatNamed:(id)a0;
- (unsigned long long)inspectorIndexForKey:(id)a0;
- (id)keyForInspectorIndex:(unsigned long long)a0;
- (BOOL)p_validateNameStemCount;
- (void)updateCustomFormat:(id)a0 oldKey:(id)a1;
- (id)addImportedCustomFormat:(id)a0;
- (void)addCustomFormatForUpgrade:(id)a0 legacyKey:(unsigned int)a1;

@end
