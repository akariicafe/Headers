@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MobileSyncAccountNotificationObserver : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
