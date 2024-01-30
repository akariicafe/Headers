@class NSMapTable, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface PXNetworkStatusMonitor : NSObject {
    NSObject<OS_nw_path_monitor> *_defaultPathMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_observers;
    struct { unsigned long long type; BOOL isConstrained; BOOL isExpensive; } queue_bestAvailableNetworkType;
}

@property (class, readonly) PXNetworkStatusMonitor *sharedInstance;

@property (readonly) struct { unsigned long long x0; BOOL x1; BOOL x2; } bestAvailableNetworkType;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_handlePathUpdate:(id)a0;
- (void)_queue_notifyObserversOfBestAvailableNetworkType:(struct { unsigned long long x0; BOOL x1; BOOL x2; })a0;

@end
