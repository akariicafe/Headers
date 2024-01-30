@class STMediaStatusDomainPublisher, NSMutableDictionary, PAAccessLogger, NSObject;
@protocol OS_dispatch_queue;

@interface BWCameraStreamingMonitor : NSObject {
    unsigned int _cameraTypeBitMask;
    STMediaStatusDomainPublisher *_mediaStatusDomainPublisher;
    NSObject<OS_dispatch_queue> *_cameraStreamingMonitorQueue;
    BOOL _msnReportingEnabled;
    BOOL _systemStatusReportingEnabled;
    NSMutableDictionary *_clientInfoByPID;
    NSMutableDictionary *_managedClientInfoByBundleID;
    PAAccessLogger *_privacyAccountingAccessLogger;
}

+ (void)initialize;
+ (id)sharedCameraStreamingMonitor;

- (id)initWithMediaStatusDomainPublisher:(id)a0 msnReportingEnabled:(BOOL)a1 systemStatusReportingEnabled:(BOOL)a2 privacyAccountingAccessLogger:(id)a3;
- (void)setCameraAccess:(BOOL)a0 deviceType:(int)a1 clientAuditToken:(struct { unsigned int x0[8]; })a2 tccIdentity:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)setStreaming:(BOOL)a0 deviceType:(int)a1 portType:(id)a2 clientAuditToken:(struct { unsigned int x0[8]; })a3 tccIdentity:(id)a4 completionHandler:(id /* block */)a5;

@end
