@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}

@property (readonly, weak) id observer;

- (BOOL)handleNotification:(id)a0;
- (id)initWithObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end
