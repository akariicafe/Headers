@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PPRecordMonitoringHelper : NSObject {
    NSMapTable *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
}

- (void).cxx_destruct;
- (BOOL)loadRecordsAndMonitorChangesWithDelegate:(id)a0 recordGenerator:(id /* block */)a1 notificationRegistrationBlock:(id /* block */)a2;
- (void)handleChangeNotificationWithName:(id)a0 afterDelaySeconds:(double)a1 handler:(id /* block */)a2;
- (void)sendChangesToDelegatesWithChangeGenerator:(id /* block */)a0 recordGenerator:(id /* block */)a1;
- (void)resetWithDelegate:(id)a0 recordGenerator:(id /* block */)a1;
- (void)loadRecordsWithDelegate:(id)a0 recordGenerator:(id /* block */)a1;
- (id)_setupRecentChangesWithDelegates:(id)a0 recordGenerator:(id /* block */)a1;
- (id)initWithName:(id)a0;
- (id)_handleRecentChangesWithDelegates:(id)a0 changeGenerator:(id /* block */)a1 recordGenerator:(id /* block */)a2;
- (void)sendResetToAllDelegatesWithRecordGenerator:(id /* block */)a0;

@end
