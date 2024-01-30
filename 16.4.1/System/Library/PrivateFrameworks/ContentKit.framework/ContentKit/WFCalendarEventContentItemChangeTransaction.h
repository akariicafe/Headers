@class EKEvent, EKEventStore;

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKEvent *mutableEvent;
@property (readonly, nonatomic) EKEventStore *eventStore;

- (void)addAttachments:(id)a0;
- (void).cxx_destruct;
- (void)removeAllAttachments;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;
- (id)initWithContentItem:(id)a0 eventStore:(id)a1;
- (void)updateAttachments:(id)a0;

@end
