@class NSObject, IOKMatchingNotificationRef, IOKIterator;
@protocol OS_dispatch_queue;

@interface IOKMatchingNotification : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) IOKIterator *iterator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) IOKMatchingNotificationRef *notificationRef;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)primeNotification;

@end
