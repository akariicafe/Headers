@class NSString, NSXPCConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate> {
    int _notifyToken;
    int _notifyTokenLegacyTrigger;
    int _notifyTokenLegacyEarlyDetect;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_invalidateConnection;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)voiceTriggered;
- (void)earlyDetected;
- (void)_attemptConnection;
- (void)_enableTriggerEventXPCNotification:(BOOL)a0;
- (void)_voiceTriggered;
- (void)_earlyDetected;
- (void)_attemptConnectionInQueue;

@end
