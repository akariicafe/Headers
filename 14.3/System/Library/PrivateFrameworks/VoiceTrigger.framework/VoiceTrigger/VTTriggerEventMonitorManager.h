@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitorManager : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (void)removeConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addConnection:(id)a0;
- (void)notifyVoiceTrigger;
- (void)notifyEarlyDetect;

@end
