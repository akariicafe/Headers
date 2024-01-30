@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FMXPCNotificationsUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *darwinNotificationHandlers;
@property (retain, nonatomic) NSMutableDictionary *distributedNotificationHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue;

+ (id)sharedInstance;
+ (void)handleDarwinNotificationsWithHandlers:(id)a0;
+ (void)handleDistributedNotificationsWithHandlers:(id)a0;

- (void)_didReceiveDistributedNotification:(id)a0 withContext:(id)a1;
- (void)registerHandler:(id /* block */)a0 forDarwinNotification:(id)a1;
- (BOOL)isHandlerRegisteredForDistributedNotification:(id)a0;
- (void)registerHandler:(id /* block */)a0 forDistributedNotification:(id)a1;
- (void)deregisterHandlerForDistributedNotification:(id)a0;
- (BOOL)isHandlerRegisteredForDarwinNotification:(id)a0;
- (void)deregisterHandlerForDarwinNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_didReceiveDarwinNotification:(id)a0;

@end
