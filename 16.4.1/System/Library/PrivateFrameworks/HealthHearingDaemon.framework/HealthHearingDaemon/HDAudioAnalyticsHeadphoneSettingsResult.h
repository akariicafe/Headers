@class HDAudioAnalyticsHeadphoneSettingsDeviceResult;

@interface HDAudioAnalyticsHeadphoneSettingsResult : NSObject

@property (retain, nonatomic) HDAudioAnalyticsHeadphoneSettingsDeviceResult *localDevice;
@property (retain, nonatomic) HDAudioAnalyticsHeadphoneSettingsDeviceResult *activePairedWatch;

- (void).cxx_destruct;
- (id)initWithLocalDevice:(id)a0 activePairedWatch:(id)a1;

@end
