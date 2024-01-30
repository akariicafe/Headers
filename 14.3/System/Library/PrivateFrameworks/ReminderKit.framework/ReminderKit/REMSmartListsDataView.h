@class REMStore;

@interface REMSmartListsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

+ (id)smartListsFromSmartListStorages:(id)a0 store:(id)a1;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchSmartListWithSmartListTag:(id)a0 reminderIDs:(id)a1 createIfNeeded:(BOOL)a2 error:(id *)a3;
- (id)fetchSmartListWithSmartListTag:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;

@end
