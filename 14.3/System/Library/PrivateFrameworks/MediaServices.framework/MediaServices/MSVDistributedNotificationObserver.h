@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, MSVDistributedNotificationObserverDelegate;

@interface MSVDistributedNotificationObserver : NSObject {
    int _notifyToken;
}

@property (readonly, nonatomic) NSString *distributedName;
@property (readonly, nonatomic) NSString *localName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<MSVDistributedNotificationObserverDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfoForLocalNotification;

+ (id)observerWithDistributedName:(id)a0 localName:(id)a1 queue:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDistributedName:(id)a0 localName:(id)a1 queue:(id)a2;
- (void)dealloc;
- (int)notifyToken;
- (void)_handleDistributedNotificationWithNotifyToken:(int)a0;

@end
