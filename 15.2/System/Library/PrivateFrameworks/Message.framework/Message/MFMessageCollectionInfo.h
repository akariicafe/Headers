@class NSArray, MFMessageInfo, MFMessageInfoOrderedSet;

@interface MFMessageCollectionInfo : NSObject {
    MFMessageInfoOrderedSet *_messageInfoSet;
}

@property (readonly, nonatomic) MFMessageInfo *firstMessage;
@property (readonly, nonatomic) MFMessageInfo *lastMessage;
@property (readonly, nonatomic) MFMessageInfo *visibleMessageInfo;
@property (readonly, nonatomic) NSArray *uniqueMessageInfos;
@property (readonly, nonatomic) NSArray *allMessageInfos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long messagesCount;
@property (readonly, nonatomic) unsigned long long messageCountWithDuplicates;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) long long messageCollectionHash;
@property (copy, nonatomic) id /* block */ duplicatePreferenceComparator;

+ (unsigned long long)stateForMessages:(id)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)addMessageInfo:(id)a0;
- (unsigned long long)indexOfMessageInfo:(id)a0;
- (unsigned long long)removeMessageInfo:(id)a0;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)a0;
- (id)messageInfoAtIndex:(unsigned long long)a0;
- (id)messageInfoEquivalentToMessageInfo:(id)a0;
- (id)duplicatesOfMessageInfo:(id)a0;
- (id)initWithHash:(long long)a0 comparator:(id /* block */)a1;
- (void)mergeWithCollection:(id)a0;

@end
