@class NSObject, _DKKnowledgeStore, _CDClientContext;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface HMDDuetEventManager : HMFObject

@property (retain, nonatomic) _CDClientContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<_DKKnowledgeSaving> saveStore;
@property (retain, nonatomic) _DKKnowledgeStore *deleteStore;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> queryStore;

+ (id)sharedInstance;
+ (id)eventTypeAsString:(unsigned long long)a0;
+ (id)identifierForType:(unsigned long long)a0 eventValue:(id)a1;
+ (id)eventStreamForType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_handleHomeRemovedNotification:(id)a0;
- (void)_handleRoomRemovedNotification:(id)a0;
- (void)_handleServiceRemovedNotification:(id)a0;
- (void)_handleAccessoryRemovedNotification:(id)a0;
- (void)_handleActionSetRemovedNotification:(id)a0;
- (void)_logToCoreDuetStoreEventWithType:(unsigned long long)a0 metadata:(id)a1;
- (void)_logEventWithType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 typeIdentifier:(id)a3 metadata:(id)a4;
- (id)_queryEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (void)_deleteEventsForHomeUUID:(id)a0;
- (void)_deleteEventsForAccessoryUUID:(id)a0;
- (void)_deleteEventsForServiceUUID:(id)a0;
- (void)_deleteEventsForRoomUUID:(id)a0;
- (void)_deleteEventsForActionSetUUID:(id)a0;
- (void)_deleteEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (id)_dumpEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (void)logEventWithType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 typeIdentifier:(id)a3 metadata:(id)a4;
- (id)queryEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (void)deleteEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (void)resetAllEvents;
- (id)dumpEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (id)dumpAllEvents;
- (id)queryMostRecentEventWithCharacteristicType:(id)a0 serviceType:(id)a1 homeUUID:(id)a2;

@end
