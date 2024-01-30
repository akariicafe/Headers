@class WFLinkQuality;

@interface WFMobileWiFiStateMonitor : NSObject

@property (nonatomic) long long state;
@property (nonatomic) struct __WiFiManagerClient { } *manager;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) WFLinkQuality *linkQuality;
@property (copy) id /* block */ handler;

- (void)_updateState;
- (void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient { } *)a0;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopMonitoring;

@end
