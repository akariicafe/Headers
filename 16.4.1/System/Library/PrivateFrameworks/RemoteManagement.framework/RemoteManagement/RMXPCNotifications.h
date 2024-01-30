@class NSString, NSSet, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RMXPCNotifications : NSObject

@property (class, readonly, nonatomic) RMXPCNotifications *darwinNotifier;
@property (class, readonly, nonatomic) RMXPCNotifications *distributedNotifier;

@property (readonly, copy, nonatomic) NSString *streamName;
@property (readonly, copy, nonatomic) NSString *eventDictKeyName;
@property (copy, nonatomic) NSSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *pendingNotifications;
@property (retain, nonatomic) NSMutableDictionary *notificationObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue;

+ (void)registerForDarwinNotifications:(id)a0;
+ (void)_setupEventStreamHandler:(id)a0;
+ (void)_setupNotifier:(id)a0 notifications:(id)a1;
+ (void)registerForDistributedNotifications:(id)a0;

- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)a0;
- (void)_removeXPCEventForNotification:(id)a0;
- (void)_addXPCEventForNotification:(id)a0;
- (void)_waitForQueue:(id /* block */)a0;
- (void)addObserverForNotification:(id)a0 observer:(id)a1;
- (BOOL)hasObserverForNotification:(id)a0;
- (id)initWithStreamName:(id)a0 eventDictKeyName:(id)a1;
- (void)removeObserverForNotification:(id)a0;

@end
