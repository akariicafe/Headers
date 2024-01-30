@class CNContactStore, NSString;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)newSADomainObjectFromCNContact:(id)a0;
- (id)_currentSyncSnapshotProperty;
- (void)setCurrentSyncSnapshotAnchorString:(id)a0;
- (id)copyChangeHistoryAfterSyncAnchor:(id)a0;
- (id)expectedSyncKeyPrefix;
- (id)fullSyncSnapshotProperty;
- (BOOL)hasContactsForFullSync;
- (id)contactsForFullSync;
- (id)getLastClearedSyncAnchor;
- (BOOL)verifyChangeHistory;
- (void)clearChangeHistoryToSyncAnchor:(id)a0;
- (id)newSADomainObjectFromCNContactWithIdentifier:(id)a0;
- (id)newSADomainObjectFromDeletedContactIdentifier:(id)a0;
- (void)resetCurrentSyncSnapshot;
- (id)currentSyncSnapshotAnchorString;
- (long long)currentSyncSnapshotCount;

@end
