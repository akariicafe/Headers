@class NSData, HIDRemoteDeviceServer, NSObject;
@protocol OS_dispatch_semaphore;

@interface HIDRemoteDevice : HIDUserDevice

@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSData *lastGetReport;
@property int lastSetReportStatus;
@property BOOL waitForReport;
@property unsigned int handleReportCount;
@property unsigned int handleReportError;
@property unsigned int intNotify;
@property struct IONotificationPort { } *intPort;
@property (weak) HIDRemoteDeviceServer *server;
@property (retain) id endpoint;
@property unsigned long long deviceID;

- (void)cancel;
- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (int)setReportHandler:(int)a0 reportID:(unsigned char)a1 status:(int)a2;
- (int)getReportHandler:(int)a0 reportID:(unsigned char)a1 report:(char *)a2 reportLength:(unsigned long long)a3;

@end
