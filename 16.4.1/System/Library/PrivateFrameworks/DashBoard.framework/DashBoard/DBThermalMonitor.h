@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DBThermalMonitor : NSObject

@property (nonatomic, getter=isThermalBlocked) BOOL thermalBlocked;
@property (nonatomic) int hotToken;
@property (nonatomic) unsigned long long hotLevel;
@property (nonatomic) int coldToken;
@property (nonatomic) unsigned long long coldLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) long long level;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_startListeningForThermalEvents;
- (void)_queue_respondToCurrentThermalCondition;

@end
