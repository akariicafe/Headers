@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (id)init;
- (void)notifyDidStopStream:(id)a0;
- (void).cxx_destruct;
- (void)notifyWillStartStreamWithContext:(id)a0 audioProviderUUID:(id)a1 option:(id)a2;
- (void)unregisterObserver:(id)a0;
- (void)notifyWillStopStream:(id)a0;
- (void)notifyDidStartStreamWithContext:(id)a0 audioProviderUUID:(id)a1 successfully:(BOOL)a2 option:(id)a3;

@end
