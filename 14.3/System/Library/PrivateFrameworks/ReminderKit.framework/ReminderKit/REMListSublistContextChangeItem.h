@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;

- (void).cxx_destruct;
- (void)addListChangeItem:(id)a0;
- (id)initWithListChangeItem:(id)a0;
- (void)_insertListChangeItem:(id)a0 adjacentToListChangeItem:(id)a1 isAfter:(BOOL)a2;
- (void)insertListChangeItem:(id)a0 beforeListChangeItem:(id)a1;
- (void)insertListChangeItem:(id)a0 afterListChangeItem:(id)a1;

@end
