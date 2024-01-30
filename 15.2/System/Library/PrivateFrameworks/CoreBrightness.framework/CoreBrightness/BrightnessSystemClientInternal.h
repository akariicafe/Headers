@class NSObject, NSXPCConnection, NSCondition, NSMutableArray, BrightnessSystemClientExportedObj;
@protocol OS_dispatch_queue, OS_os_log;

@interface BrightnessSystemClientInternal : NSObject {
    NSXPCConnection *_connection;
    id _remote;
    BrightnessSystemClientExportedObj *exportedObj;
    NSMutableArray *_clientProperties;
    NSCondition *copyPropertyForKeyWaitCondition;
    BOOL copyPropertyForKeyCompleted;
    BOOL _useSynchronousRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_os_log> *_logHandle;
}

- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)removeKeyFromClientProperties:(id)a0;
- (void)removePropertyFromNotification:(id)a0;
- (void)addPropertyForNotification:(id)a0;
- (id)init;
- (void)removePropertiesFromNotification:(id)a0;
- (void)stopXpcService;
- (void)addPropertiesForNotification:(id)a0;
- (void)dealloc;
- (void)addKeyToClientProperties:(id)a0;

@end
