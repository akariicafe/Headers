@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DBDisclosureMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL markedSafe;
@property (readonly, nonatomic) BOOL active;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)turnFeaturesOff;
- (void)_observersDisclosureMonitorDidChange;
- (void)markSafe;

@end
