@class MFSparseMutable64IndexSet, NSArray, NSMutableDictionary, NSMutableArray, MFMessageInfo;

@interface MFMessageInfoOrderedSet : NSObject {
    MFSparseMutable64IndexSet *_knownMessageIDs;
    NSMutableArray *_mutableMessageInfos;
    NSMutableDictionary *_duplicateMessageInfos;
}

@property (copy, nonatomic) id /* block */ comparator;
@property (copy, nonatomic) id /* block */ duplicatePreferenceComparator;
@property (readonly, nonatomic) NSArray *uniqueMessageInfos;
@property (readonly, nonatomic) NSArray *allMessageInfos;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long countWithDuplicates;
@property (readonly, nonatomic) MFMessageInfo *firstMessage;
@property (readonly, nonatomic) MFMessageInfo *lastMessage;

- (id)initWithComparator:(id /* block */)a0;
- (void)_invalidate;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)addMessageInfo:(id)a0;
- (unsigned long long)indexOfMessageInfo:(id)a0;
- (unsigned long long)removeMessageInfo:(id)a0;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)a0;
- (id)messageInfoAtIndex:(unsigned long long)a0;
- (id)messageInfoEquivalentToMessageInfo:(id)a0;
- (id)duplicatesOfMessageInfo:(id)a0;
- (void)_addMessageInfoToDuplicates:(id)a0;
- (void)_removeDuplicatesForMessageInfo:(id)a0;
- (unsigned long long)_scanForMessageInfoSimilarTo:(id)a0;
- (unsigned long long)removeMessageInfoAtIndex:(unsigned long long)a0;
- (id)_duplicateMessageInfosForMessageInfo:(id)a0;
- (void)removeMessageInfosAtIndexes:(id)a0;
- (void)removeAllMessageInfos;
- (void)replaceMessageInfo:(id)a0 withReplacement:(id)a1 inPlace:(BOOL)a2;
- (id)allDuplicatesOfMessageInfo:(id)a0;
- (void)enumerateUniqueMessageInfosWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
