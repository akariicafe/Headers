@class MSCameraDeviceManager, PTPCameraDeviceManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ICMasterDeviceBrowser : NSObject {
    NSMutableArray *_suspendedBrowsers;
    long long _numberOfBrowsingBrowsers;
    NSObject<OS_dispatch_source> *_suspensionTimer;
    NSObject<OS_dispatch_queue> *_suspensionTimerQueue;
    PTPCameraDeviceManager *_ptpDevManager;
    MSCameraDeviceManager *_msDevManager;
}

@property (readonly) NSMutableArray *devices;
@property (readonly) NSMutableArray *browsers;

+ (BOOL)exists;
+ (id)defaultBrowser;

- (int)start:(id)a0;
- (void)notifySuspension:(unsigned long long)a0;
- (id)init;
- (void)stop:(id)a0;
- (void)dealloc;
- (BOOL)startMSCameraBrowser;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)handleCommandCompletionNotification:(id)a0;
- (id)deviceWithDelegate:(id)a0;
- (BOOL)startPTPCameraBrowser;
- (void)addBrowser:(id)a0;
- (void)runSuspensionTimer:(BOOL)a0;
- (void)removeBrowser:(id)a0;

@end
