@class NSObject, AVExternalProtectionMonitor;
@protocol OS_dispatch_queue;

@interface AVExternalProtectionMonitorInternal : NSObject {
    struct OpaqueFigCPEProtector { } *_protector;
    AVExternalProtectionMonitor *_publicMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

@end
