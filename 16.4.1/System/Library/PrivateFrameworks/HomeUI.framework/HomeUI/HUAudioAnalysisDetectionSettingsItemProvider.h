@class HMAccessory, NSMutableSet;

@interface HUAudioAnalysisDetectionSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (readonly, nonatomic) HMAccessory *accessory;

- (id)init;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithAccessory:(id)a0;

@end
