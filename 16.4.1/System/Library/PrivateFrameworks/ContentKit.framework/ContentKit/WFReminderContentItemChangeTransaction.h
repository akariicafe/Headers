@class REMSaveRequest, REMReminderChangeItem, REMStore;

@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) REMStore *store;
@property (retain, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMReminderChangeItem *mutableReminder;

+ (void)addImageFiles:(id)a0 toAttachmentContext:(id)a1;

- (void)updateTags:(id)a0;
- (id)initWithContentItem:(id)a0;
- (void)updateList:(id)a0;
- (void).cxx_destruct;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;
- (void)addTags:(id)a0;
- (void)removeSubtasks:(id)a0;
- (void)updateSubtasks:(id)a0;
- (void)addImageFiles:(id)a0;
- (void)addSubtasks:(id)a0;
- (void)removeAllImageAttachments;
- (void)removeAllSubtasks;
- (void)updateImageFiles:(id)a0;

@end
