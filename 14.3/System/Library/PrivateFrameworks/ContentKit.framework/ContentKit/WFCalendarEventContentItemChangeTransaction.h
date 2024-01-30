@class EKEvent;

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKEvent *mutableEvent;

- (void).cxx_destruct;
- (id)initWithContentItem:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;

@end
