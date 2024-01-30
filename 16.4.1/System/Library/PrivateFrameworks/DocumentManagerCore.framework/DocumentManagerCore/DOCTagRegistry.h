@class NSArray, NSPointerArray, NSMutableOrderedSet, DOCTagCloudSource, NSString;

@interface DOCTagRegistry : NSObject <DOCTagRegistryProtocol> {
    int _localStorageDidUpdateNotifyToken;
}

@property (class, readonly) DOCTagRegistry *shared;

@property (readonly, nonatomic) NSPointerArray *changeObservers;
@property (retain, nonatomic) NSMutableOrderedSet *userTags;
@property (retain, nonatomic) NSMutableOrderedSet *discoveredTags;
@property (retain, nonatomic) DOCTagCloudSource *iCloudDataSource;
@property (nonatomic) long long inBatchUpdateCount;
@property (retain, nonatomic) NSArray *tagsBeforeBatchUpdate;
@property (nonatomic) BOOL shouldSynchronizeAfterBatchUpdate;
@property (nonatomic) long long tagSerialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sanitizedTagName:(id)a0;

- (void)synchronize;
- (void)addChangeObserver:(id)a0;
- (void)removeChangeObserver:(id)a0;
- (void)dealloc;
- (BOOL)addTag:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (id)_allTags;
- (void)addTag:(id)a0 options:(long long)a1;
- (id)_setForTagType:(long long)a0;
- (BOOL)_canAddTag:(id)a0;
- (id)_memberTag:(id)a0;
- (void)_notifyDidRemoveTagIfNoLongPresentExistingTags:(id)a0;
- (id)_tagNameForComparing:(id)a0;
- (void)addTags:(id)a0 options:(long long)a1;
- (BOOL)canReplaceTag:(id)a0 withTag:(id)a1;
- (BOOL)inBatchUpdate;
- (void)inBatchUpdateEnter;
- (void)inBatchUpdateLeave;
- (BOOL)insertTag:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isValidNewTagName:(id)a0;
- (BOOL)moveTag:(id)a0 toIndex:(unsigned long long)a1;
- (void)notifyObserversDidRemoveTags:(id)a0;
- (void)notifyObserversDidReplaceTag:(id)a0 withTag:(id)a1;
- (void)performBatchUpdate:(id /* block */)a0;
- (void)removeAllTagsOfType:(long long)a0;
- (void)removeTags:(id)a0;
- (BOOL)replaceTag:(id)a0 withTag:(id)a1;
- (id)tagForName:(id)a0;

@end
