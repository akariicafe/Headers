@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSAccessorySiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)_init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3 forAccessory:(id)a4;
- (void)notifyDidStopStream:(id)a0 reason:(unsigned long long)a1 withEventUUID:(id)a2 forAccessory:(id)a3;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1 forAccessory:(id)a2;
- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1 forAccessory:(id)a2;

@end
