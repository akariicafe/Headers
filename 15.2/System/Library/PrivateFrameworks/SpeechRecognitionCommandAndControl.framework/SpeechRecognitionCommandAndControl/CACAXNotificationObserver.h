@class NSArray;
@protocol CACAXNotificationObserverDelegate;

@interface CACAXNotificationObserver : NSObject {
    struct __AXObserver { } *_observer;
}

@property (weak, nonatomic) id<CACAXNotificationObserverDelegate> delegate;
@property (readonly, nonatomic) NSArray *notifications;

- (void).cxx_destruct;
- (id)initWithNotifications:(id)a0;
- (void)_didObserveNotification:(int)a0 notificationData:(void *)a1;

@end
