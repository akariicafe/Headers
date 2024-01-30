@class EKEvent;

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKEvent *mutableEvent;

- (id)initWithContentItem:(id)a0;
- (void).cxx_destruct;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;

@end
