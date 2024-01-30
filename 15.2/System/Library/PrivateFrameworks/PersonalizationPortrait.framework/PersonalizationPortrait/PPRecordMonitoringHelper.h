@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PPRecordMonitoringHelper : NSObject {
    NSMapTable *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
}

- (void)sendResetToAllDelegatesWithRecordGenerator:(id /* block */)a0;
- (void)handleChangeNotificationWithName:(id)a0 afterDelaySeconds:(double)a1 handler:(id /* block */)a2;
- (void)resetWithDelegate:(id)a0 recentChangesInProgress:(BOOL)a1 recordGenerator:(id /* block */)a2;
- (id)_setupRecentChangesWithDelegates:(id)a0 recordGenerator:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)sendChangesToDelegatesWithChangeGenerator:(id /* block */)a0 recordGenerator:(id /* block */)a1;
- (id)_handleRecentChangesWithDelegates:(id)a0 changeGenerator:(id /* block */)a1 recordGenerator:(id /* block */)a2;
- (void)loadRecordsWithDelegate:(id)a0 recordGenerator:(id /* block */)a1;
- (BOOL)loadRecordsAndMonitorChangesWithDelegate:(id)a0 recordGenerator:(id /* block */)a1 notificationRegistrationBlock:(id /* block */)a2;

@end
