@class SGSqlEntityStore, NSString, NSURL;

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver> {
    NSURL *_vCardsDirectoryURL;
}

@property (weak, nonatomic) SGSqlEntityStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifyWhenFlushed:(id /* block */)a0;
+ (id)entityIdentifiersFromCNIdentifiers:(id)a0;
+ (id)searchableIndex;
+ (id)dispatchGroup;

- (void)addContact:(id)a0;
- (void)rejectContact:(id)a0;
- (id)coreSpotlightAttributeSetForContact:(id)a0;
- (id)searchableItemsForContactsForInternalIdentifiers:(id)a0;
- (void)sendContactToSpotlight:(id)a0;
- (void)confirmOrRejectContact:(id)a0;
- (void)confirmContact:(id)a0;
- (void)removeAllStoredPseudoContacts;
- (void).cxx_destruct;
- (id)urlForRecordIdVCard:(id)a0;
- (id)initWithSGSqlEntityStore:(id)a0;
- (void)removeAllPseudoContactsInIdSet:(id)a0;
- (id)pseudoContactVcardDirectory;
- (id)urlForStorageContactVCard:(id)a0;

@end
