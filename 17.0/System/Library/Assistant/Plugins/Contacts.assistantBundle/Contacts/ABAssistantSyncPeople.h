@class CNContactStore, NSString;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clearChangeHistoryToSyncAnchor:(id)a0;
- (id)currentSyncSnapshotAnchorString;
- (id)newSADomainObjectFromCNContact:(id)a0;
- (id)_currentSyncSnapshotProperty;
- (id)contactsForFullSync;
- (id)copyChangeHistoryAfterSyncAnchor:(id)a0;
- (long long)currentSyncSnapshotCount;
- (id)expectedSyncKeyPrefix;
- (id)fullSyncSnapshotProperty;
- (id)getLastClearedSyncAnchor;
- (BOOL)hasContactsForFullSync;
- (id)newSADomainObjectFromCNContactWithIdentifier:(id)a0;
- (id)newSADomainObjectFromDeletedContactIdentifier:(id)a0;
- (void)resetCurrentSyncSnapshot;
- (void)setCurrentSyncSnapshotAnchorString:(id)a0;
- (BOOL)verifyChangeHistory;

@end
