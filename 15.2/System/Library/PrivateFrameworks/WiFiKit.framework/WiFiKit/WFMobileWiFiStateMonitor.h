@class WFLinkQuality;

@interface WFMobileWiFiStateMonitor : NSObject

@property (nonatomic) long long state;
@property (nonatomic) struct __WiFiManagerClient { } *manager;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) WFLinkQuality *linkQuality;
@property (copy) id /* block */ handler;

- (void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient { } *)a0;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)stopMonitoring;
- (void)dealloc;
- (void)_updateState;

@end
