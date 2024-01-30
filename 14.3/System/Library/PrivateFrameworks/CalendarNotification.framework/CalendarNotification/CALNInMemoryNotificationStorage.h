@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage>

@property (readonly, nonatomic) NSMutableDictionary *recordMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotificationRecord:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_notificationRecords;
- (void)addNotificationRecords:(id)a0;
- (id)notificationRecords;
- (void)_addNotificationRecord:(id)a0;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void)removeAllNotificationRecords;
- (void)_removeNotificationRecordsPassingTest:(id /* block */)a0;

@end
