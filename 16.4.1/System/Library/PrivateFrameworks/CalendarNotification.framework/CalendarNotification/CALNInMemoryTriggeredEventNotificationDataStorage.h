@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>

@property (readonly, nonatomic) NSMutableDictionary *notificationDataMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationData;
- (void)removeNotificationDataWithIdentifier:(id)a0;
- (void)removeNotificationData;
- (void)addNotificationData:(id)a0 withIdentifier:(id)a1;
- (id)init;
- (id)notificationDataWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
