@class REMSaveRequest, REMReminderChangeItem, REMStore;

@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) REMStore *store;
@property (retain, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMReminderChangeItem *mutableReminder;

- (void)updateList:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentItem:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;
- (void)updateSubtasks:(id)a0;

@end
