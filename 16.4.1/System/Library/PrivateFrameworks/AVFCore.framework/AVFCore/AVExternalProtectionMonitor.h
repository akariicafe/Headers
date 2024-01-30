@class AVExternalProtectionMonitorInternal;

@interface AVExternalProtectionMonitor : NSObject {
    AVExternalProtectionMonitorInternal *_monitor;
}

@property (readonly, nonatomic) long long externalProtectionState;

- (void)dealloc;
- (id)init;

@end
