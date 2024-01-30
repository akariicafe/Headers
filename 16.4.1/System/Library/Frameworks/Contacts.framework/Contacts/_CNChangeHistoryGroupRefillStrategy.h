@class CNContactStore;

@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy>

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)initWithContactStore:(id)a0;
- (id)objectsRepresentedByBatch:(id)a0;
- (id)updateChanges:(id)a0 withFetchedGroups:(id)a1;
- (id)batchesToRepresentObjects:(id)a0 suggestedBatchSize:(unsigned long long)a1;
- (id)fetchGroupsWithIdentifiers:(id)a0;
- (void).cxx_destruct;

@end
