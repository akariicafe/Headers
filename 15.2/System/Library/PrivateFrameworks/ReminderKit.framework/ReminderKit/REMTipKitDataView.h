@class REMStore;

@interface REMTipKitDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchListsWithCustomBadgeCountWithError:(id *)a0;
- (id)fetchCompletedRemindersCountWithError:(id *)a0;
- (id)fetchCustomSmartListsCountWithError:(id *)a0;
- (id)fetchHashtagsCountWithError:(id *)a0;
- (id)fetchListsCountWithError:(id *)a0;
- (id)fetchUncompletedRemindersCountWithError:(id *)a0;
- (id)fetchCompletedRemindersCountInList:(id)a0 error:(id *)a1;

@end
