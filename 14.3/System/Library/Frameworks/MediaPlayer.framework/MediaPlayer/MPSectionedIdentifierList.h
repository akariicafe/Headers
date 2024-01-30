@class MPSectionedIdentifierListEntry, NSString, NSDictionary, NSSet, NSMutableDictionary, NSObject, NSMutableArray;
@protocol MPSectionedIdentifierListAnnotationDelegate, OS_dispatch_queue, MPSectionedIdentifierListDelegate;

@interface MPSectionedIdentifierList : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, MPExclusiveAccessible, NSSecureCoding> {
    long long _itemCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_startEntries;
    MPSectionedIdentifierListEntry *_endEntry;
    NSMutableDictionary *_sectionHeadEntryMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_sectionDataSources) NSDictionary *sectionDataSources;
@property (weak, nonatomic) id<MPSectionedIdentifierListAnnotationDelegate> annotationDelegate;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<MPSectionedIdentifierListDelegate> delegate;
@property (readonly, nonatomic) long long itemCount;
@property (nonatomic) BOOL automaticallyReversesNonDestructiveDataSourceEdits;
@property (readonly, nonatomic) NSSet *allSectionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_performWithoutRequiringExclusivity:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0 withExclusiveAccessToken:(id)a1;
- (id)enumeratorWithOptions:(unsigned long long)a0 startPosition:(id)a1 endPosition:(id)a2 withExclusiveAccessToken:(id)a3;
- (void)removeItem:(id)a0 fromSection:(id)a1;
- (void)addDataSourceAtStart:(id)a0 section:(id)a1 completion:(id /* block */)a2;
- (void)addDataSource:(id)a0 section:(id)a1 afterItem:(id)a2 inSection:(id)a3 completion:(id /* block */)a4;
- (void)addDataSource:(id)a0 section:(id)a1 afterTailOfSection:(id)a2 completion:(id /* block */)a3;
- (void)addDataSourceAtEnd:(id)a0 section:(id)a1 completion:(id /* block */)a2;
- (void)replaceDataSource:(id)a0 forSection:(id)a1 completion:(id /* block */)a2;
- (void)moveItemToStart:(id)a0 fromSection:(id)a1;
- (void)moveItemToEnd:(id)a0 fromSection:(id)a1;
- (void)moveItem:(id)a0 fromSection:(id)a1 afterItem:(id)a2 inSection:(id)a3;
- (void)moveItem:(id)a0 fromSection:(id)a1 afterHeadOfSection:(id)a2;
- (void)moveItem:(id)a0 fromSection:(id)a1 afterTailOfSection:(id)a2;
- (long long)_itemCountWithExclusiveAccessToken:(id)a0;
- (void)dataSourceInsertItemsAtHead:(id)a0 inSection:(id)a1;
- (void)_beforeInitWithCoder:(id)a0;
- (void)dataSourceInsertItems:(id)a0 afterItem:(id)a1 inSection:(id)a2;
- (void)dataSourceInsertItemsAtTail:(id)a0 inSection:(id)a1;
- (void)dataSourceRemoveItem:(id)a0 fromSection:(id)a1;
- (void)dataSourceReloadItem:(id)a0 inSection:(id)a1;
- (void)_enumerator:(id)a0 didEncounterEntry:(id)a1 withExclusiveAccessToken:(id)a2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)a0 withExclusiveAccessToken:(id)a1;
- (void)dealloc;
- (BOOL)hasSection:(id)a0;
- (void)performWithExclusiveAccess:(id /* block */)a0;
- (id)performWithExclusiveAccessAndReturnObject:(id /* block */)a0;
- (BOOL)performWithExclusiveAccessAndReturnBOOL:(id /* block */)a0;
- (long long)performWithExclusiveAccessAndReturnInteger:(id /* block */)a0;
- (void)_stitchWithPreviousEntry:(id)a0 list:(id)a1 cloneIndex:(id)a2;
- (void)_stitchLastItemEntryToHeadEntry:(id)a0 branchList:(id)a1;
- (void)_stitchPreviousEntry:(id)a0 toEntry:(id)a1 cloneIndex:(id)a2;
- (id)_encodeEntry:(id)a0 withExclusiveAccessToken:(id)a1;
- (id)enumeratorWithOptions:(unsigned long long)a0 startPosition:(id)a1 endPosition:(id)a2;
- (void)addDataSource:(id)a0 section:(id)a1 afterHeadOfSection:(id)a2 completion:(id /* block */)a3;
- (BOOL)hasItem:(id)a0 inSection:(id)a1;
- (BOOL)isDeletedItem:(id)a0 inSection:(id)a1;
- (void)dataSourceMoveItemToHead:(id)a0 inSection:(id)a1;
- (void)dataSourceMoveItem:(id)a0 afterItem:(id)a1 inSection:(id)a2;
- (void)dataSourceMoveItemToTail:(id)a0 inSection:(id)a1;
- (void)dataSourceUpdateSection:(id)a0;
- (void)_loadDataSource:(id)a0 forSection:(id)a1 completion:(id /* block */)a2;
- (void)_addBranchToEntry:(id)a0 entries:(id)a1 withExclusiveAccessToken:(id)a2;
- (id)_entryForPosition:(id)a0 withExclusiveAccessToken:(id)a1;
- (id)_dataSourceInsertItems:(id)a0 fromSection:(id)a1 afterEntry:(id)a2 withExclusiveAccessToken:(id)a3;
- (id)_dataSourceMoveItem:(id)a0 inSection:(id)a1 afterEntry:(id)a2 withExclusiveAccessToken:(id)a3;
- (void)_insertDataSourceHead:(id)a0 afterEntry:(id)a1 withExclusiveAccessToken:(id)a2;
- (id)_startEntriesWithExclusiveAccessToken:(id)a0;
- (void)_insertDataSource:(id)a0 forSection:(id)a1 afterEntry:(id)a2 withExclusiveAccessToken:(id)a3;
- (id)_endEntryWithExclusiveAccessToken:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)_itemEntry:(id)a0 sectionIdentifier:(id)a1 withExclusiveAccessToken:(id)a2;
- (id)_sectionHeadEntryMapWithExclusiveAccessToken:(id)a0;
- (id)_tailEntryForSectionIdentifier:(id)a0 withExclusiveAccessToken:(id)a1;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)a0;
- (id)enumeratorWithOptions:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_debugDescriptionWithEnumerator:(id)a0 lengths:(struct { int x0; int x1; int x2; int x3; } *)a1;
- (id)debugDescriptionStartingAtItem:(id)a0 inSection:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
