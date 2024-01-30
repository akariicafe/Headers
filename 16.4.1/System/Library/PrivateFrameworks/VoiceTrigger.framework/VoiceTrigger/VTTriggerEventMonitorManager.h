@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitorManager : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (void)notifyVoiceTrigger;
- (id)init;
- (void)addConnection:(id)a0;
- (void)removeConnection:(id)a0;
- (void).cxx_destruct;
- (void)notifyEarlyDetect;

@end
