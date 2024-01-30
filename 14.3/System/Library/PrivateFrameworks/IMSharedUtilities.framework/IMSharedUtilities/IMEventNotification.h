@interface IMEventNotification : IMDoubleLinkedListNode

@property (weak) id target;
@property (weak) id sender;
@property (copy) id /* block */ eventNotificationBlock;
@property (copy) id /* block */ eventNotificationWithSenderBlock;

+ (id)eventNotification:(id)a0 eventNotificationBlock:(id /* block */)a1;
+ (id)eventNotification:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;
+ (id)eventNotification:(id)a0;

- (void)cancel;
- (void)cache;
- (void).cxx_destruct;
- (BOOL)wasCancelled;
- (BOOL)invoke;

@end
