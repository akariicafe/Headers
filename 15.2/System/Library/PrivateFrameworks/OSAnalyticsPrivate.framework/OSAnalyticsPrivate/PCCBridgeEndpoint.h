@class OS_xpc_remote_connection, NSMutableDictionary, NSMutableSet, NSObject, OS_remote_device_browser;
@protocol OS_dispatch_queue;

@interface PCCBridgeEndpoint : PCCEndpoint {
    OS_remote_device_browser *_device_browser;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_initializationQueue;
    NSMutableDictionary *_remoteDevices;
    NSMutableDictionary *_remoteCRKeys;
    NSMutableDictionary *_outgoingConnections;
    OS_xpc_remote_connection *_listeningConnection;
    NSMutableSet *_interruptedDevices;
}

+ (BOOL)isSupportedRemoteDeviceType:(unsigned int)a0;
+ (id)identifierForRemoteDevice:(id)a0;
+ (id)UDIDForRemoteDevice:(id)a0;
+ (id)remoteDeviceForIdentifier:(id)a0;
+ (void)addSenderToMessage:(id)a0;
+ (void)wipeDataIfNeeded:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)runWithDelegate:(id)a0;
- (BOOL)isDeviceNearby:(id)a0;
- (id)synchronize:(id)a0 withOptions:(id)a1;
- (id)send:(id)a0 message:(id)a1 error:(id *)a2;
- (id)send:(id)a0 file:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)deviceIds;
- (void)setupDeviceStateChangeHandler;
- (void)setupIncomingEventListener;
- (void)exitInterruptedStateFrom:(id)a0;
- (void)enterInterruptedStateFrom:(id)a0;
- (void)stashCrashReporterKeyForIdentifier:(id)a0;
- (id)identifierForTarget:(id)a0;

@end
