@class NSMutableData, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCFeaturePluginHIDDescriptor : NSObject

@property (nonatomic) BOOL isShuttingDown;
@property (nonatomic) unsigned char getReportID;
@property (nonatomic) int getReportType;
@property (retain, nonatomic) NSMutableData *getReportBuffer;
@property (nonatomic) int getReportResult;
@property (nonatomic) struct __IOHIDUserDevice { } *deviceRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hidCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *getReportSemaphore;
@property (copy, nonatomic) id /* block */ sendOutReport;
@property (copy, nonatomic) id /* block */ sendGetReport;
@property (copy, nonatomic) id /* block */ sendComponentUpdate;
@property struct __IOHIDEventSystemClient { } *hidEventSystemClientRef;
@property (readonly, nonatomic) NSString *hidDeviceUUIDStr;

- (void).cxx_destruct;
- (void)dealloc;
- (void)removeDescriptor;
- (id)initWithDecriptorInfo:(id)a0 sendOutReport:(id /* block */)a1 sendGetReport:(id /* block */)a2 sendComponentUpdate:(id /* block */)a3;
- (BOOL)handleInReport:(id)a0;
- (BOOL)handleGetReportResponse:(unsigned char)a0 reportID:(unsigned char)a1 report:(id)a2;
- (void)startHIDEventSystemListener:(id)a0;
- (BOOL)handleHIDComponentUpdate:(BOOL)a0;
- (BOOL)handleOutReport:(id)a0;
- (BOOL)handleGetReport:(int)a0 reportID:(unsigned char)a1 report:(id)a2;

@end
