@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;

- (void)addListChangeItem:(id)a0;
- (void).cxx_destruct;
- (void)addMergeableOrderingNode:(id)a0;
- (void)insertMergeableOrderingNode:(id)a0 beforeMergeableOrderingNode:(id)a1;
- (void)insertMergeableOrderingNode:(id)a0 afterMergeableOrderingNode:(id)a1;
- (void)insertListChangeItem:(id)a0 beforeListChangeItem:(id)a1;
- (void)insertListChangeItem:(id)a0 afterListChangeItem:(id)a1;
- (void)addSmartListChangeItem:(id)a0;
- (void)insertSmartListChangeItem:(id)a0 beforeSmartListChangeItem:(id)a1;
- (void)insertSmartListChangeItem:(id)a0 afterSmartListChangeItem:(id)a1;
- (id)_accountChangeItem;
- (id)initWithListChangeItem:(id)a0;
- (void)_insertMergeableOrderingNode:(id)a0 adjacentToMergeableOrderingNode:(id)a1 isAfter:(BOOL)a2;
- (void)undeleteChildListWithID:(id)a0 usingUndo:(id)a1;
- (void)undeleteChildSmartListWithID:(id)a0 usingUndo:(id)a1;

@end
