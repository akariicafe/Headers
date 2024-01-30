@class ATXHeuristicDevice, REMStore;

@interface ATXRemindersDataSource : NSObject {
    ATXHeuristicDevice *_device;
    REMStore *_store;
}

- (id)initWithDevice:(id)a0;
- (id)_dictionariesFromReminders:(id)a0 startDate:(id)a1 endDate:(id)a2 incompleteRemindersOnly:(BOOL)a3;
- (void).cxx_destruct;
- (void)fetchRemindersObjectGraphFromStartDate:(id)a0 toEndDate:(id)a1 incompleteRemindersOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_dictionariesFromLists:(id)a0 startDate:(id)a1 endDate:(id)a2 incompleteRemindersOnly:(BOOL)a3;
- (id)_dictionariesFromAccounts:(id)a0 startDate:(id)a1 endDate:(id)a2 incompleteRemindersOnly:(BOOL)a3;

@end
