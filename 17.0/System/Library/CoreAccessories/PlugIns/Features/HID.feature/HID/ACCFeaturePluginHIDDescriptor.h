@class NSString, NSMutableData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface ACCFeaturePluginHIDDescriptor : NSObject

@property (nonatomic) BOOL isShuttingDown;
@property (nonatomic) unsigned char getReportID;
@property (nonatomic) int getReportType;
@property (retain, nonatomic) NSMutableData *getReportBuffer;
@property (nonatomic) int getReportResult;
@property (nonatomic) struct __IOHIDUserDevice { } *deviceRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hidCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *getReportSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *registerDeviceMatchingTimerSource;
@property (copy, nonatomic) id /* block */ sendOutReport;
@property (copy, nonatomic) id /* block */ sendGetReport;
@property (copy, nonatomic) id /* block */ sendComponentUpdate;
@property struct __IOHIDEventSystemClient { } *hidEventSystemClientRef;
@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) NSMutableArray *initialReportCache;
@property (readonly, nonatomic) NSString *hidDeviceUUIDStr;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)handleInReport:(id)a0;
- (BOOL)handleGetReport:(int)a0 reportID:(unsigned char)a1 report:(id)a2;
- (BOOL)handleGetReportResponse:(unsigned char)a0 reportID:(unsigned char)a1 report:(id)a2;
- (BOOL)handleHIDComponentUpdate:(BOOL)a0;
- (BOOL)handleOutReport:(id)a0;
- (id)initWithDecriptorInfo:(id)a0 sendOutReport:(id /* block */)a1 sendGetReport:(id /* block */)a2 sendComponentUpdate:(id /* block */)a3;
- (void)removeDescriptor;
- (void)startHIDEventSystemListener:(id)a0;

@end
