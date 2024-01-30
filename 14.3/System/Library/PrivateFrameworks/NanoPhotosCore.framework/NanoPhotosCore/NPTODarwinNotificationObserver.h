@interface NPTODarwinNotificationObserver : NSObject {
    int _notificationToken;
}

- (void)dealloc;
- (id)initWithNotificationName:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
