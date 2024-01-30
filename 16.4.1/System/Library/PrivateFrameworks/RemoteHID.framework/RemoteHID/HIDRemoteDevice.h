@class NSData, NSObject;
@protocol OS_dispatch_semaphore;

@interface HIDRemoteDevice : HIDUserDevice

@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSData *lastGetReport;
@property int lastSetReportStatus;
@property BOOL waitForReport;
@property unsigned int handleReportCount;
@property unsigned int handleReportError;
@property unsigned long long endpointID;
@property unsigned long long deviceID;
@property unsigned char transportVersion;
@property unsigned char side;

- (id)initWithProperties:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)getReportHandler:(int)a0 reportID:(unsigned char)a1 report:(char *)a2 reportLength:(unsigned long long)a3;
- (int)setReportHandler:(int)a0 reportID:(unsigned char)a1 status:(int)a2;

@end
