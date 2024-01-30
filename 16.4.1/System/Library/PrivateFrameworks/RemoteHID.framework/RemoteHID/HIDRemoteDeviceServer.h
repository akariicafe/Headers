@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HIDRemoteDeviceServer : NSObject {
    unsigned long long _stateHandler;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}

@property (readonly) NSMutableDictionary *endpoints;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (int)remoteDeviceSetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (int)remoteDeviceGetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (void)cancel;
- (unsigned long long)syncRemoteTimestamp:(unsigned long long)a0 forEndpoint:(id)a1;
- (BOOL)createRemoteDevice:(id)a0 deviceID:(unsigned long long)a1 property:(id)a2;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (BOOL)connectEndpoint:(id)a0;
- (void)disconnectAll;
- (void)disconnectEndpoint:(id)a0;
- (void)endpointMessageHandler:(id)a0 data:(char *)a1 size:(unsigned long long)a2;
- (void)endpointPacketHandler:(id)a0 packet:(struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } *)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (void)remoteDeviceConnectHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1[0]; } *)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (BOOL)remoteDeviceGetReportHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned char x2[0]; } *)a1;
- (BOOL)remoteDeviceReportHandler:(id)a0 header:(struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } *)a1;
- (BOOL)remoteDeviceReportHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned char x2[0]; } *)a1;
- (BOOL)remoteDeviceSetReportHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned char x2[0]; } *)a1;
- (BOOL)remoteDeviceTimestampedReportHandler:(id)a0 device:(id)a1 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned long long x2; unsigned char x3[0]; } *)a2;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateHandler:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;

@end
