@class NSString;

@interface _ATXInternalNotification : NSObject <_ATXInternalNotificationProtocol> {
    NSString *_notificationName;
    id _token;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postData:(id)a0 forNotificationNamed:(id)a1;

- (void)registerForNotifications:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationName:(id)a0;
- (void)dealloc;

@end
