@class TSClockManager, NSMutableDictionary, TSUserFilteredClock, NSObject;
@protocol OS_dispatch_queue;

@interface HIDRemoteDeviceAACPServer : HIDRemoteDeviceServer {
    struct BTSessionImpl { } *_session;
    struct BTAccessoryManagerImpl { } *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    TSClockManager *_coreTimeSyncManager;
    TSUserFilteredClock *_timeSyncClock;
    NSMutableDictionary *_endpointTimeSyncEnabled;
}

- (void)cancel;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)activate;
- (void)btSessionCreate;
- (void)removeBTDevice:(struct BTDeviceImpl { } *)a0;
- (void)btServiceEventHandler:(struct BTDeviceImpl { } *)a0 services:(unsigned int)a1 eventType:(int)a2 event:(unsigned int)a3 result:(int)a4;
- (void)btSessionInit:(struct BTSessionImpl { } *)a0;
- (int)sendMessageBTDevice:(struct BTDeviceImpl { } *)a0 data:(char *)a1 size:(unsigned long long)a2;
- (void)addBTDevice:(struct BTDeviceImpl { } *)a0;
- (BOOL)createRemoteDevice:(id)a0 deviceID:(unsigned long long)a1 property:(id)a2;
- (void)btSessionEventHandler:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void)btDeviceMessageHandler:(struct BTDeviceImpl { } *)a0 type:(int)a1 data:(char *)a2 size:(unsigned long long)a3;
- (void)btAccessoryEventHandler:(struct BTDeviceImpl { } *)a0 event:(int)a1 state:(int)a2;
- (int)remoteDeviceSetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (int)remoteDeviceGetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (unsigned long long)syncRemoteTimestamp:(unsigned long long)a0 forEndpoint:(id)a1;

@end
