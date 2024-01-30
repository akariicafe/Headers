@class STMediaStatusDomainPublisher, NSMutableDictionary, BKSApplicationStateMonitor, PAAccessLogger, NSObject;
@protocol OS_dispatch_queue;

@interface BWCameraStreamingMonitor : NSObject {
    unsigned int _cameraTypeBitMask;
    STMediaStatusDomainPublisher *_mediaStatusDomainPublisher;
    NSObject<OS_dispatch_queue> *_cameraStreamingMonitorQueue;
    BOOL _msnReportingEnabled;
    BOOL _systemStatusReportingEnabled;
    NSMutableDictionary *_clientInfoByPID;
    NSMutableDictionary *_managedClientInfoByBundleID;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    PAAccessLogger *_privacyAccountingAccessLogger;
}

+ (void)initialize;
+ (id)sharedCameraStreamingMonitor;

- (void)setStreaming:(BOOL)a0 portType:(id)a1 clientAuditToken:(struct { unsigned int x0[8]; })a2 tccIdentity:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithMediaStatusDomainPublisher:(id)a0 msnReportingEnabled:(BOOL)a1 systemStatusReportingEnabled:(BOOL)a2 privacyAccountingAccessLogger:(id)a3;
- (void)setCameraAccess:(BOOL)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 tccIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;

@end
