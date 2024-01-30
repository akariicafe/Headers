@class IOKInterestNotificationRef, NSObject;
@protocol OS_dispatch_queue;

@interface IOKInterestNotification : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned int object;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) IOKInterestNotificationRef *notificationRef;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
