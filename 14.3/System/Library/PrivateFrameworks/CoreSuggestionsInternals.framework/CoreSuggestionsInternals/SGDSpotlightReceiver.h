@class NSString, SGCoalescingDropBox, SGDSuggestManager;

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver> {
    SGDSuggestManager *_manager;
    SGCoalescingDropBox *_purgeAndDeleteIdentifiersDropbox;
    SGCoalescingDropBox *_deleteDomainIdentifiersDropbox;
    SGCoalescingDropBox *_deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox *_deleteInteractionIdDropbox;
    SGCoalescingDropBox *_deleteInteractionGroupIdDropbox;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)addInteractions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)addUserAction:(id)a0 withItem:(id)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (id)supportedContentTypes;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;

@end
