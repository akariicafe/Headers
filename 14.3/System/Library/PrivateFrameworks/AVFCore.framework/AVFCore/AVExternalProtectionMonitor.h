@class AVExternalProtectionMonitorInternal;

@interface AVExternalProtectionMonitor : NSObject {
    AVExternalProtectionMonitorInternal *_monitor;
}

@property (readonly, nonatomic) long long externalProtectionState;

- (id)init;
- (void)dealloc;

@end
