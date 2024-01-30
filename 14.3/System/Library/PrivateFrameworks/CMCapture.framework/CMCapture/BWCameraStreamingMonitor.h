@class NSObject, STMediaStatusDomainPublisher;
@protocol OS_dispatch_queue;

@interface BWCameraStreamingMonitor : NSObject {
    unsigned int _cameraTypeBitMask;
    STMediaStatusDomainPublisher *_mediaStatusDomainPublisher;
    NSObject<OS_dispatch_queue> *_cameraStreamingMonitorQueue;
    BOOL _msnReportingEnabled;
}

+ (void)initialize;
+ (id)sharedCameraStreamingMonitor;

- (id)initWithMediaStatusDomainPublisher:(id)a0;
- (void)dealloc;
- (id)_init;
- (void)setStreaming:(BOOL)a0 portType:(id)a1 clientAuditToken:(struct { unsigned int x0[8]; })a2 completionHandler:(id /* block */)a3;

@end
