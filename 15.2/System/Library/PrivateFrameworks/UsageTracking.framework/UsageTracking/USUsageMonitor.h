@class NSXPCConnection;

@interface USUsageMonitor : NSObject

@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startMonitoringBudgets:(id)a0 darwinNotificationName:(id)a1 notificationTimes:(id)a2 clientIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)stopMonitoringBudgets:(id)a0 clientIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkStatusOfBudgets:(id)a0 clientIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)startMonitoringBudgets:(id)a0 darwinNotificationName:(id)a1 notificationTimes:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)startMonitoringBudgets:(id)a0 darwinNotificationName:(id)a1 notificationTimes:(id)a2 error:(id *)a3;
- (void)stopMonitoringBudgets:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopMonitoringAllBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)checkStatusOfBudgets:(id)a0 completionHandler:(id /* block */)a1;
- (id)checkStatusOfBudgets:(id)a0 error:(id *)a1;
- (void)checkStatusOfAllBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)checkStatusOfBudgets:(id)a0 clientIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (id)checkStatusOfBudgets:(id)a0 clientIdentifiers:(id)a1 error:(id *)a2;

@end
