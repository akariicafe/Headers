@class TSClockManager, NSMutableDictionary, TSUserFilteredClock, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface HIDRemoteDeviceAACPServer : HIDRemoteDeviceServer {
    struct BTSessionImpl { } *_session;
    struct BTAccessoryManagerImpl { } *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_decodeBuff;
    TSClockManager *_coreTimeSyncManager;
    TSUserFilteredClock *_timeSyncClock;
    NSMutableDictionary *_endpointTimeSyncEnabled;
}

- (int)remoteDeviceSetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (void)btDeviceMessageHandler:(struct BTDeviceImpl { } *)a0 type:(int)a1 data:(char *)a2 size:(unsigned long long)a3;
- (void)btServiceEventHandler:(struct BTDeviceImpl { } *)a0 services:(unsigned int)a1 eventType:(int)a2 event:(unsigned int)a3 result:(int)a4;
- (void)btSessionInit:(struct BTSessionImpl { } *)a0;
- (int)remoteDeviceGetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (void)btAccessoryEventHandler:(struct BTDeviceImpl { } *)a0 event:(int)a1 state:(int)a2;
- (void)btSessionCreate;
- (int)sendMessageBTDevice:(struct BTDeviceImpl { } *)a0 data:(char *)a1 size:(unsigned long long)a2 transportVersion:(unsigned char)a3 side:(unsigned char)a4;
- (void)cancel;
- (void)removeBTDevice:(struct BTDeviceImpl { } *)a0;
- (void)addBTDevice:(struct BTDeviceImpl { } *)a0;
- (unsigned long long)syncRemoteTimestamp:(unsigned long long)a0 forEndpoint:(id)a1;
- (void)btSessionEventHandler:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (BOOL)createRemoteDevice:(id)a0 deviceID:(unsigned long long)a1 property:(id)a2;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
