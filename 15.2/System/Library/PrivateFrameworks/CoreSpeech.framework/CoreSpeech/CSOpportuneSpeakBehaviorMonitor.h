@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)notifyDidStopStream:(id)a0;
- (void)registerObserver:(id)a0;
- (void)notifyDidStartStreamWithContext:(id)a0 audioProviderUUID:(id)a1 successfully:(BOOL)a2 option:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)notifyWillStartStreamWithContext:(id)a0 audioProviderUUID:(id)a1 option:(id)a2;
- (void)unregisterObserver:(id)a0;
- (void)notifyWillStopStream:(id)a0;

@end
