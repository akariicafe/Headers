@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeRunPolicy : CSPolicy {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_subscribeEventMonitors;
- (id)init;
- (void).cxx_destruct;
- (void)_addSmartSiriVolumeEnabledConditions;

@end
